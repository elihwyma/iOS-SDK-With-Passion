/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface VSErrorRecoveryOption : NSObject

{
    _Bool _destructive;
    NSString *_localizedAlertButtonTitle;
    CDUnknownBlockType _attemptHandler;
}

@property (copy, nonatomic) NSString *localizedAlertButtonTitle;
@property (copy, nonatomic) CDUnknownBlockType attemptHandler;
@property (nonatomic, getter=isDestructive) _Bool destructive;

@end
