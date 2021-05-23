/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

#import <_PASZonedObject.h>

@class NSString, PPNamedEntity, PPNamedEntityMetadata, PPSource;

@interface PPNamedEntityRecord : _PASZonedObject

{
    PPNamedEntity *_entity;
    PPSource *_source;
    NSString *_extractionOsBuild;
    float _initialScore;
    float _decayRate;
    unsigned short _extractionAssetVersion;
    unsigned char _algorithm;
    unsigned char _changeType;
    PPNamedEntityMetadata *_metadata;
    BOOL _bucketizedSentimentScore;
}

@property (nonatomic, readonly) PPNamedEntity *entity;
@property (nonatomic, readonly) PPSource *source;
@property (nonatomic, readonly) unsigned long long algorithm;
@property (nonatomic, readonly) double initialScore;
@property (nonatomic, readonly) double decayRate;
@property (nonatomic, readonly) NSString *extractionOsBuild;
@property (nonatomic, readonly) unsigned long long extractionAssetVersion;
@property (nonatomic, readonly) unsigned char changeType;
@property (nonatomic, readonly) double sentimentScore;
@property (nonatomic, readonly) PPNamedEntityMetadata *metadata;

+ (_Bool)supportsSecureCoding;
+ (id)describeChangeType:(unsigned char)arg1;
+ (id)describeAlgorithm:(unsigned long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToNamedEntityRecord:(id)arg1;

@end
