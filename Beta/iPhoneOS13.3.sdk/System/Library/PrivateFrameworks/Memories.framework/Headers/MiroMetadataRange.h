/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface MiroMetadataRange : NSObject

{
    int _startTimeInFrames;
    int _durationInFrames;
    unsigned long long _type;
    unsigned long long _flags;
    NSDictionary *_analysisDict;
    double _score;
    unsigned long long _rating;
    NSArray *_childRanges;
}

@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long flags;
@property (nonatomic) int startTimeInFrames;
@property (nonatomic) int durationInFrames;
@property (retain, nonatomic) NSDictionary *analysisDict;
@property (nonatomic) double score;
@property (nonatomic) unsigned long long rating;
@property (retain, nonatomic) NSArray *childRanges;

+ (id)descriptionForType:(unsigned long long)arg1;
+ (id)rangeWithRange:(id)arg1;
+ (id)descriptionForFlags:(unsigned long long)arg1;
+ (id)rangeWithType:(unsigned long long)arg1;
+ (void)miro_computeAndSetStaticScoreWithFlags:(unsigned long long)arg1 forRanges:(id)arg2;
+ (id)rangeWithVPMetadataRange:(id)arg1;
+ (double)miro_computeStaticScoreWithFlags:(unsigned long long)arg1;
+ (void)enumerateByAscendingTypes:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (id)mergeRanges:(id)arg1 withRanges:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)_description;
- (int)durationOfOverlapWithStart:(int)arg1 duration:(int)arg2;
- (id)_treeDescriptionWithDepthLevel:(unsigned long long)arg1;
- (int)durationOfOverlapWithRange:(id)arg1;

@end
