/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

#import <NSObject.h>

@class NSArray, NSString, NSUUID, PPLocation, PPSource;

@interface PPLocationRecord : NSObject

{
    NSUUID *_uuid;
    PPLocation *_location;
    PPSource *_source;
    unsigned char _algorithm;
    float _initialScore;
    float _decayRate;
    NSArray *_contextualNamedEntities;
    NSString *_extractionOsBuild;
    unsigned short _extractionAssetVersion;
    BOOL _bucketizedSentimentScore;
}

@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) PPLocation *location;
@property (nonatomic, readonly) PPSource *source;
@property (nonatomic, readonly) unsigned short algorithm;
@property (nonatomic, readonly) double initialScore;
@property (nonatomic, readonly) double decayRate;
@property (nonatomic, readonly) double sentimentScore;
@property (nonatomic, readonly) NSArray *contextualNamedEntities;
@property (nonatomic, readonly) NSString *extractionOsBuild;
@property (nonatomic, readonly) unsigned long long extractionAssetVersion;

+ (_Bool)supportsSecureCoding;
+ (id)describeAlgorithm:(unsigned short)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init_;
- (_Bool)isEqualToLocationRecord:(id)arg1;

@end
