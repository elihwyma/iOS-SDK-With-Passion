/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSNumber, NSString;

@interface HDDataOriginProvenance : NSObject <Swift>

{
    long long _syncProvenance;
    NSString *_productType;
    NSString *_systemBuild;
    NSString *_sourceVersion;
    NSString *_timeZoneName;
    NSNumber *_sourceID;
    NSNumber *_deviceID;
    CDStruct_f6aba300 _operatingSystemVersion;
}

@property (nonatomic) long long syncProvenance;
@property (copy, nonatomic) NSString *productType;
@property (copy, nonatomic) NSString *systemBuild;
@property (nonatomic) CDStruct_2ec95fd7 operatingSystemVersion;
@property (copy, nonatomic) NSString *sourceVersion;
@property (copy, nonatomic) NSString *timeZoneName;
@property (retain, nonatomic) NSNumber *sourceID;
@property (retain, nonatomic) NSNumber *deviceID;

+ (_Bool)supportsSecureCoding;
+ (id)dataProvenanceWithSyncProvenance:(long long)arg1 productType:(id)arg2 systemBuild:(id)arg3 operatingSystemVersion:(CDStruct_2ec95fd7)arg4 sourceVersion:(id)arg5 timeZoneName:(id)arg6 sourceID:(id)arg7 deviceID:(id)arg8;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
