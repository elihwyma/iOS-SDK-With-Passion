/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@protocol MiroMediaItem;

__attribute__((visibility("hidden")))
@interface MiroPickInfo : NSObject

{
    float _score;
    float _distance;
    float _splitDistance;
    float _imageDistance;
    unsigned long long _pickOrder;
    unsigned long long _adjustedPickOrder;
    unsigned long long _sourceOrder;
    unsigned long long _splitOrder;
    id <MiroMediaItem> _item;
    unsigned long long _clipCompareResultFlags;
}

@property (nonatomic) float score;
@property (nonatomic) float distance;
@property (nonatomic) float splitDistance;
@property (nonatomic) unsigned long long pickOrder;
@property (nonatomic) unsigned long long adjustedPickOrder;
@property (nonatomic) unsigned long long sourceOrder;
@property (nonatomic) unsigned long long splitOrder;
@property (nonatomic, readonly) id <MiroMediaItem> item;
@property (nonatomic, readonly) float imageDistance;
@property (nonatomic, readonly) unsigned long long clipCompareResultFlags;
@property (nonatomic, readonly) double idealDuration;
@property (nonatomic, readonly) double idealDurationWithTrim;
@property (nonatomic, readonly) double biasedDuration;
@property (nonatomic, readonly) double maxPleasantDuration;

+ (id)pickInfoWithItem:(id)arg1 score:(float)arg2 distance:(float)arg3 splitDistance:(float)arg4 pickOrder:(unsigned long long)arg5 adjustedPickOrder:(unsigned long long)arg6 sourceOrder:(unsigned long long)arg7 splitOrder:(unsigned long long)arg8 imageDistance:(float)arg9 clipCompareResultFlags:(unsigned long long)arg10;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)idealDurationForBlueprint:(id)arg1 respectTrim:(_Bool)arg2;
- (double)idealDurationForBlueprint:(id)arg1 biased:(_Bool)arg2 maxPleasant:(_Bool)arg3 respectTrim:(_Bool)arg4;
- (double)trimmedDuration;
- (double)_idealDurationForBlueprint:(id)arg1 biased:(_Bool)arg2 max:(_Bool)arg3;
- (double)voiceRangeDuration;

@end
