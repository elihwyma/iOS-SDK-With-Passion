/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDDataOriginProvenance, NSString;

@interface _HDDataProvenanceKey : NSObject <Swift>

{
    unsigned long long _hash;
    HDDataOriginProvenance *_dataProvenance;
    NSString *_localProductType;
    NSString *_localSystemBuild;
}

@property (copy, nonatomic, readonly) HDDataOriginProvenance *dataProvenance;
@property (copy, nonatomic, readonly) NSString *localProductType;
@property (copy, nonatomic, readonly) NSString *localSystemBuild;

+ (id)provenanceKeyForProvenance:(id)arg1 localProductType:(id)arg2 localSystemBuild:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
