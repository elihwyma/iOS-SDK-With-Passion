/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <Foundation/NSObject.h>

@class DNDClientEventBehavior, NSDate, NSString, NSUUID;

@interface DNDSEventBehaviorResolution : NSObject

{
    NSUUID *_UUID;
    NSDate *_date;
    DNDClientEventBehavior *_eventBehavior;
    NSString *_clientIdentifier;
    unsigned long long _outcome;
    unsigned long long _reason;
}

@property (copy, nonatomic, readonly) NSUUID *UUID;
@property (copy, nonatomic, readonly) NSDate *date;
@property (copy, nonatomic, readonly) DNDClientEventBehavior *eventBehavior;
@property (copy, nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, readonly) unsigned long long outcome;
@property (nonatomic, readonly) unsigned long long reason;

+ (id)resolutionForDate:(id)arg1 eventBehavior:(id)arg2 clientIdentifier:(id)arg3 outcome:(unsigned long long)arg4 reason:(unsigned long long)arg5;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithUUID:(id)arg1 date:(id)arg2 eventBehavior:(id)arg3 clientIdentifier:(id)arg4 outcome:(unsigned long long)arg5 reason:(unsigned long long)arg6;

@end
