/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

#import <PersonalizationPortrait/PPNamedEntityRecord.h>

@class NSString, PPNamedEntity, PPNamedEntityMetadata, PPSource;

@interface PPMutableNamedEntityRecord : PPNamedEntityRecord

@property (retain, nonatomic) PPNamedEntity *entity;
@property (retain, nonatomic) PPSource *source;
@property (nonatomic) unsigned long long algorithm;
@property (nonatomic) double initialScore;
@property (nonatomic) double decayRate;
@property (retain, nonatomic) NSString *extractionOsBuild;
@property (nonatomic) unsigned char changeType;
@property (nonatomic) unsigned long long extractionAssetVersion;
@property (nonatomic) double sentimentScore;
@property (retain, nonatomic) PPNamedEntityMetadata *metadata;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
