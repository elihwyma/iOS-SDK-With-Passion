/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface HDXPCAlarmEvent : NSObject

{
    _Bool _isUserVisible;
    NSString *_name;
    NSDate *_fireDate;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSDate *fireDate;
@property (nonatomic, readonly) _Bool isUserVisible;

+ (id)_eventWithName:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithName:(id)arg1 fireDate:(id)arg2 isUserVisible:(_Bool)arg3;

@end
