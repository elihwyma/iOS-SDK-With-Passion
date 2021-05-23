/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <TextInput/TITypologyStatistic.h>

@interface TITypologyStatisticAutocorrectionListUI : TITypologyStatistic

{
    _Bool _didSetListUIDisplayed;
    _Bool _listUIDisplayed;
    long long _inputsWhileHidden;
    long long _inputsWhileDisplayed;
    long long _hiddenToDisplayed;
    long long _displayedToHidden;
}

@property (nonatomic, readonly) long long inputsWhileHidden;
@property (nonatomic, readonly) long long inputsWhileDisplayed;
@property (nonatomic, readonly) long long hiddenToDisplayed;
@property (nonatomic, readonly) long long displayedToHidden;

- (void)setListUIDisplayed:(_Bool)arg1;
- (void)visitRecordSync:(id)arg1;
- (void)visitRecordKeyboardInput:(id)arg1;
- (void)visitRecordAutocorrections:(id)arg1;
- (id)structuredReport;
- (void)addInputCount;

@end
