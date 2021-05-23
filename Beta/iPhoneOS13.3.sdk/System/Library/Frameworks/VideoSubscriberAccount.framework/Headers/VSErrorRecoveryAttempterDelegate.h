/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@interface VSErrorRecoveryAttempterDelegate : NSObject

+ (id)sharedDelegate;

- (void)didPresentErrorWithRecovery:(_Bool)arg1 contextInfo:(void *)arg2;

@end
