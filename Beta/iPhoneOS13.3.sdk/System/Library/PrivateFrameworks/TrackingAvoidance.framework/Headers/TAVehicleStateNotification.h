/*
 Image: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface TAVehicleStateNotification : NSObject

{
    NSDate *_date;
    unsigned long long _vehicularState;
    unsigned long long _vehicularHints;
    unsigned long long _operatorState;
}

@property (copy, nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) unsigned long long vehicularState;
@property (nonatomic, readonly) unsigned long long vehicularHints;
@property (nonatomic, readonly) unsigned long long operatorState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)descriptionDictionary;
- (id)getDate;
- (id)initWithVehicularState:(unsigned long long)arg1 andVehicularHints:(unsigned long long)arg2 andOperatorState:(unsigned long long)arg3 date:(id)arg4;

@end
