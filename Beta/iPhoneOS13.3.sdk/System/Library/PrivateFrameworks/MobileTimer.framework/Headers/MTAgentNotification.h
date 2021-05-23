/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class MTPowerAssertion, NSString;

@interface MTAgentNotification : NSObject

{
    long long _type;
    NSString *_name;
    MTPowerAssertion *_powerAssertion;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) MTPowerAssertion *powerAssertion;

+ (id)notificationWithType:(long long)arg1 name:(id)arg2 powerAssertionTimeout:(double)arg3;
+ (id)notificationWithType:(long long)arg1 name:(id)arg2;

- (void)dealloc;
- (void)releaseAssertion;
- (id)initWithType:(long long)arg1 name:(id)arg2 powerAssertionTimeout:(double)arg3;

@end
