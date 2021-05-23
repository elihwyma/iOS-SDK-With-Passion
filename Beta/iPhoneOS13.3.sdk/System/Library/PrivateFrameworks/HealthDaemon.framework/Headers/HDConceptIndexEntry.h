/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString, NSUUID;

@interface HDConceptIndexEntry : NSObject

{
    NSUUID *_sampleUUID;
    long long _conceptIdentifier;
    long long _conceptVersion;
    NSString *_keyPath;
    unsigned long long _compoundIndex;
    unsigned long long _type;
    NSNumber *_ontologyVersion;
}

@property (copy, nonatomic, readonly) NSUUID *sampleUUID;
@property (nonatomic, readonly) long long conceptIdentifier;
@property (nonatomic, readonly) long long conceptVersion;
@property (copy, nonatomic, readonly) NSString *keyPath;
@property (nonatomic, readonly) unsigned long long compoundIndex;
@property (nonatomic, readonly) unsigned long long type;
@property (copy, nonatomic, readonly) NSNumber *ontologyVersion;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithSampleUUID:(id)arg1 conceptIdentifier:(long long)arg2 conceptVersion:(long long)arg3 keyPath:(id)arg4 compoundIndex:(unsigned long long)arg5 type:(unsigned long long)arg6 ontologyVersion:(id)arg7;

@end
