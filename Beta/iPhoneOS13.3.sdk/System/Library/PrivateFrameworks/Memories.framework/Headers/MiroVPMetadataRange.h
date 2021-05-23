/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface MiroVPMetadataRange : NSObject

{
    unsigned long long _type;
    unsigned long long _flags;
    int _startTimeInFrames;
    int _durationInFrames;
    NSDictionary *_analysisDict;
    double _score;
}

@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) unsigned long long flags;
@property (nonatomic, readonly) int startTimeInFrames;
@property (nonatomic, readonly) int durationInFrames;
@property (nonatomic, readonly) NSDictionary *analysisDict;
@property (nonatomic, readonly) double score;

+ (id)descriptionForType:(unsigned long long)arg1;
+ (id)descriptionForFlags:(unsigned long long)arg1;
+ (void)enumerateByAscendingTypes:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (id)mergeRanges:(id)arg1 withRanges:(id)arg2;
+ (id)rangeWithType:(unsigned long long)arg1 flags:(unsigned long long)arg2 startTimeInFrames:(int)arg3 durationInFrames:(int)arg4 analysisDict:(id)arg5;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)_setScore:(double)arg1;

@end
