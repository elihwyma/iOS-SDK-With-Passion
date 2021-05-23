/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUIConfirmationView.h>

@interface SAUIDelayedConfirmationView : SAUIConfirmationView

@property (nonatomic) long long autoConfirmDelay;

+ (id)delayedConfirmationView;
+ (id)delayedConfirmationViewWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
