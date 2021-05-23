/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

#import <PersonalizationPortrait/PPLocationRecord.h>

@class NSArray, NSString, NSUUID, PPLocation, PPSource;

@interface PPMutableLocationRecord : PPLocationRecord

@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) PPLocation *location;
@property (retain, nonatomic) PPSource *source;
@property (nonatomic) unsigned short algorithm;
@property (nonatomic) double initialScore;
@property (nonatomic) double decayRate;
@property (nonatomic) double sentimentScore;
@property (retain, nonatomic) NSArray *contextualNamedEntities;
@property (retain, nonatomic) NSString *extractionOsBuild;
@property (nonatomic) unsigned long long extractionAssetVersion;

+ (id)new;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
