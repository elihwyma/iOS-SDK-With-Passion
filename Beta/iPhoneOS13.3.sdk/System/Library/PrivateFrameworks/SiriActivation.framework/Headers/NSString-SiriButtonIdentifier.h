/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

#import <Foundation/NSString.h>

@interface NSString (SiriButtonIdentifier)

+ (id)stringWithSiriButtonIdentifier:(long long)arg1;
+ (id)stringWithSiriPresentationActivationCancelReason:(unsigned long long)arg1;
+ (id)stringWithSiriPresentationIdentifier:(long long)arg1;
+ (id)stringWithSiriActivationEventType:(long long)arg1;
+ (id)stringWithAFDirectActionEvent:(long long)arg1;
+ (id)stringWithAFActivationEvent:(long long)arg1;
+ (id)stringWithSiriSpotlightContextSource:(long long)arg1;

- (unsigned long long)cancelReason;
- (long long)siriPresentationIdentifier;

@end
