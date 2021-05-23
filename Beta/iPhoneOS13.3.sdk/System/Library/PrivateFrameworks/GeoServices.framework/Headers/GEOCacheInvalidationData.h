/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@class NSArray;

@interface GEOCacheInvalidationData : NSObject <Swift>

{
    double _timestamp;
    double _ttl;
    unsigned int _version;
    NSArray *_versionDomains;
}

@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) double ttl;
@property (nonatomic, readonly) unsigned int version;
@property (nonatomic, readonly) NSArray *versionDomains;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)_isKey:(id)arg1 subsetOf:(id)arg2;
- (id)initWithTimestamp:(double)arg1 ttl:(double)arg2 version:(unsigned int)arg3 domains:(id)arg4;
- (_Bool)isInvalidatedByServiceVersion:(unsigned int)arg1 domains:(id)arg2;

@end
