/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <Foundation/NSObject.h>

@class NSDateComponents, NSString, NSUUID;

@interface DNDSLegacyBehaviorOverrideEffectiveInterval : NSObject

{
    NSDateComponents *_startComponents;
    NSDateComponents *_endComponents;
    NSString *_calendarIdentifier;
    unsigned long long _repeatInterval;
    NSUUID *_identifier;
}

@property (copy, nonatomic, readonly) NSDateComponents *startComponents;
@property (copy, nonatomic, readonly) NSDateComponents *endComponents;
@property (copy, nonatomic, readonly) NSString *calendarIdentifier;
@property (nonatomic, readonly) unsigned long long repeatInterval;
@property (copy, nonatomic, readonly) NSUUID *identifier;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartComponents:(id)arg1 endComponents:(id)arg2 calendarIdentifier:(id)arg3 repeatInterval:(unsigned long long)arg4 identifier:(id)arg5;

@end
