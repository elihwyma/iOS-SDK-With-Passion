/*
 Image: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI
 */

#import <PrototypeToolsUI/PTUIRowTableViewCell.h>

@class NSString;

@interface PTUIEditRowTableViewCell : PTUIRowTableViewCell

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)cellStyleForRow:(id)arg1;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)updateDisplayedValue;
- (void)numericKeypadDidUpdateValue:(id)arg1;
- (void)numericKeypadWillDismiss:(id)arg1;
- (id)textForValue:(id)arg1;
- (id)valueForText:(id)arg1;

@end
