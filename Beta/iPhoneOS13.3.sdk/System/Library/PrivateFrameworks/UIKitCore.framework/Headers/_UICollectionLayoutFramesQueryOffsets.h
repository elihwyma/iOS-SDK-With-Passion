/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutFramesQueryOffsets : NSObject

{
    long long _indexOffset;
    long long _supplementaryIndexOffset;
    struct CGPoint _frameOffset;
}

@property (nonatomic) struct CGPoint frameOffset;
@property (nonatomic) long long indexOffset;
@property (nonatomic) long long supplementaryIndexOffset;

- (id)init;
- (id)initWithFrameOffset:(struct CGPoint)arg1 indexOffset:(long long)arg2 supplementaryIndexOffset:(long long)arg3;

@end
