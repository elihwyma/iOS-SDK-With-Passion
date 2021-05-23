/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
 */

#import <RelevanceEngineUI/REUIElementDonatedActionAction.h>

@class INIntent;

@interface REUIElementIntentAction : REUIElementDonatedActionAction

@property (nonatomic, readonly) INIntent *intent;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_performWithContext:(id)arg1;
- (id)_newPerformer;

@end
