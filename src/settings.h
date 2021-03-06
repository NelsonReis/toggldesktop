// Copyright 2014 Toggl Desktop developers.

#ifndef SRC_SETTINGS_H_
#define SRC_SETTINGS_H_

#include <string>

#include <json/json.h>  // NOLINT

#include "Poco/Types.h"

namespace toggl {

class Settings {
 public:
    Settings()
        : use_idle_detection(false)
    , menubar_timer(false)
    , menubar_project(false)
    , dock_icon(false)
    , on_top(false)
    , reminder(false)
    , idle_minutes(0)
    , focus_on_shortcut(true)
    , reminder_minutes(0)
    , manual_mode(false)
    , autodetect_proxy(true)
    , remind_mon(true)
    , remind_tue(true)
    , remind_wed(true)
    , remind_thu(true)
    , remind_fri(true)
    , remind_sat(true)
    , remind_sun(true)
    , remind_starts("")
    , remind_ends("")
    , autotrack(false)
    , open_editor_on_shortcut(false)
    , has_seen_beta_offering(false) {}
    ~Settings() {}

    Json::Value SaveToJSON() const;

    bool use_idle_detection;
    bool menubar_timer;
    bool menubar_project;
    bool dock_icon;
    bool on_top;
    bool reminder;
    Poco::UInt64 idle_minutes;
    bool focus_on_shortcut;
    Poco::UInt64 reminder_minutes;
    bool manual_mode;
    bool autodetect_proxy;
    bool remind_mon;
    bool remind_tue;
    bool remind_wed;
    bool remind_thu;
    bool remind_fri;
    bool remind_sat;
    bool remind_sun;
    std::string remind_starts;
    std::string remind_ends;
    bool autotrack;
    bool open_editor_on_shortcut;
    bool has_seen_beta_offering;
};

}  // namespace toggl

#endif  // SRC_SETTINGS_H_
