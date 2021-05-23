/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

@class NSHashTable;

@interface FBSceneTransform : NSObject

{
    struct CGAffineTransform _transform;
    NSHashTable *_targets;
    _Bool _appliesToSystemGestureView;
}

@property (nonatomic) struct CGAffineTransform transform;
@property (nonatomic) _Bool appliesToSystemGestureView;

+ (struct CGAffineTransform)concatenateTransforms:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)_initWithTransform:(struct CGAffineTransform)arg1;
- (void)_notifyTargetsTransformDidUpdate;
- (void)addTransformTarget:(id)arg1;
- (void)removeTransformTarget:(id)arg1;

@end
