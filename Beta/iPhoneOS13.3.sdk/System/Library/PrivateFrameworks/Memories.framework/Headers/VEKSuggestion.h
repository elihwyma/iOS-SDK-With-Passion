/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class PHAsset;

@interface VEKSuggestion : NSObject

{
    PHAsset *_asset;
    long long _usage;
    long long _volume;
    long long _specialTreatment;
    double _reorderTimeOffset;
}

@property (nonatomic, readonly) PHAsset *asset;
@property (nonatomic) long long usage;
@property (nonatomic) long long volume;
@property (nonatomic) long long specialTreatment;
@property (nonatomic) double reorderTimeOffset;

- (id)description;
- (id)initWithAsset:(id)arg1;

@end
