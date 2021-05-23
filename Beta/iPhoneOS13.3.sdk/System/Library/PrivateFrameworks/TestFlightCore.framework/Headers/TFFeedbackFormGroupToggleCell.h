/*
 Image: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
 */

#import <TestFlightCore/TFFeedbackFormBaseCell.h>

@class TFFeedbackEntryGroupToggle, UISwitch;

__attribute__((visibility("hidden")))
@interface TFFeedbackFormGroupToggleCell : TFFeedbackFormBaseCell

{
    UISwitch *_toggleSwitch;
    TFFeedbackEntryGroupToggle *_groupToggleEntry;
}

@property (nonatomic, readonly) UISwitch *toggleSwitch;
@property (retain, nonatomic) TFFeedbackEntryGroupToggle *groupToggleEntry;

- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (unsigned long long)displayableDataType;
- (void)setDisplayedDataGroupInclusionBool:(_Bool)arg1;
- (void)applyContentsOfEntry:(id)arg1;
- (void)didUpdateToggleSwitchValue:(id)arg1;

@end
