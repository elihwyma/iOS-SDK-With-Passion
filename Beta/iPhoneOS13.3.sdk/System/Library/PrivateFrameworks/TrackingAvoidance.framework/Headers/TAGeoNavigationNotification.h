/*
 Image: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface TAGeoNavigationNotification : NSObject

{
    NSDate *_date;
    unsigned long long _transportType;
    unsigned long long _navState;
}

@property (copy, nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) unsigned long long transportType;
@property (nonatomic, readonly) unsigned long long navState;
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
- (id)initWithTransportType:(unsigned long long)arg1 andNavigationState:(unsigned long long)arg2 date:(id)arg3;

@end
