//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSNumber, NSString;

@interface SFCompanionService : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_deviceName;
    NSString *_deviceID;
    NSString *_serviceType;
    NSString *_managerID;
    NSString *_ipAddress;
    NSString *_identifier;
    NSNumber *_nsxpcVersion;
}

+ (BOOL)supportsSecureCoding;
+ (id)serviceFromAuthorData:(id)arg1;
+ (id)serviceFromDictionary:(id)arg1;
@property(copy) NSNumber *nsxpcVersion; // @synthesize nsxpcVersion=_nsxpcVersion;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy) NSString *ipAddress; // @synthesize ipAddress=_ipAddress;
@property(copy) NSString *managerID; // @synthesize managerID=_managerID;
@property(copy) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(copy) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(copy) NSString *deviceName; // @synthesize deviceName=_deviceName;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqualToService:(id)arg1;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)messageData;
- (id)initWithServiceName:(id)arg1;

@end

