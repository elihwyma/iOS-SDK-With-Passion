/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

#import <ReminderKit/Swift-Protocol.h>

@class NSData, NSString;

@interface REMStructuredLocation : NSObject <Swift>

{
    NSString *_title;
    double _latitude;
    double _longitude;
    double _radius;
    NSString *_address;
    NSString *_routing;
    NSString *_referenceFrameString;
    NSString *_contactLabel;
    NSData *_mapKitHandle;
    NSString *_locationUID;
}

@property (nonatomic, readonly) NSString *locationUID;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double radius;
@property (copy, nonatomic) NSString *address;
@property (copy, nonatomic) NSString *routing;
@property (copy, nonatomic) NSString *referenceFrameString;
@property (copy, nonatomic) NSString *contactLabel;
@property (copy, nonatomic) NSData *mapKitHandle;

+ (_Bool)supportsSecureCoding;
+ (double)minimumRegionMonitoringDistance;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)displayName;
- (id)initWithTitle:(id)arg1;
- (_Bool)isContentEqual:(id)arg1;
- (id)initWithTitle:(id)arg1 locationUID:(id)arg2 latitude:(double)arg3 longitude:(double)arg4 radius:(double)arg5 address:(id)arg6 routing:(id)arg7 referenceFrameString:(id)arg8 contactLabel:(id)arg9 mapKitHandle:(id)arg10;
- (id)initWithTitle:(id)arg1 locationUID:(id)arg2;

@end
