//
//  TimeEntryEditViewController.h
//  kopsik_ui_osx
//
//  Created by Tanel Lebedev on 19/09/2013.
//  Copyright (c) 2013 TogglDesktop developers. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "TFDatePicker.h"
#import "NSCustomComboBox.h"
#import "NSTextFieldClickable.h"

@interface TimeEntryEditViewController : NSViewController <NSComboBoxDataSource> {
}
@property IBOutlet NSCustomComboBox *descriptionCombobox;
@property IBOutlet NSCustomComboBox *projectSelect;
@property IBOutlet NSTextField *durationTextField;
@property IBOutlet NSTextField *startTime;
@property IBOutlet NSTextField *endTime;
@property IBOutlet NSBox *startEndTimeBox;
@property IBOutlet TFDatePicker *startDate;
@property IBOutlet NSTokenField *tagsTokenField;
@property IBOutlet NSButton *billableCheckbox;
@property IBOutlet NSButton *projectPublicCheckbox;
@property IBOutlet NSTextField *lastUpdateTextField;
@property IBOutlet NSButton *deleteButton;
@property IBOutlet NSButton *backButton;
@property IBOutlet NSButton *addProjectButton;
@property IBOutlet NSTextField *workspaceLabel;
- (IBAction)descriptionComboboxChanged:(id)sender;
- (IBAction)durationTextFieldChanged:(id)sender;
- (IBAction)projectSelectChanged:(id)sender;
- (IBAction)startTimeChanged:(id)sender;
- (IBAction)endTimeChanged:(id)sender;
- (IBAction)dateChanged:(id)sender;
- (IBAction)tagsChanged:(id)sender;
- (IBAction)billableCheckBoxClicked:(id)sender;
- (IBAction)deleteButtonClicked:(id)sender;
- (IBAction)backButtonClicked:(id)sender;
- (IBAction)addProjectButtonClicked:(id)sender;
- (NSDateComponents *)parseTime:(NSTextField *)field current:(NSDateComponents *)component;
@property (strong) IBOutlet NSBox *timeTextBox;
@property (strong) IBOutlet NSBox *dateBox;
@property (strong) IBOutlet NSBox *durationBox;

// New project related stuff
@property IBOutlet NSBox *projectSelectBox;
@property IBOutlet NSBox *addProjectBox;
@property IBOutlet NSBox *dataholderBox;
@property IBOutlet NSTextField *projectNameTextField;
@property IBOutlet NSCustomComboBox *workspaceSelect;
@property IBOutlet NSCustomComboBox *clientSelect;
- (IBAction)workspaceSelectChanged:(id)sender;
- (IBAction)clientSelectChanged:(id)sender;
@property (strong) IBOutlet NSTextField *dateTimeTextField;
@property (strong) IBOutlet NSBox *timeEditBox;

@end