/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <TextInput/TIAutocorrectionList.h>

@interface TIAutocorrectionList (UIKeyboardAdditions)

@property (nonatomic, readonly) _Bool containsAutofillCandidates;
@property (nonatomic, readonly) _Bool containsContinuousPathConversions;

- (void)updateLabelsWithSmartPunctuation:(id)arg1;

@end
