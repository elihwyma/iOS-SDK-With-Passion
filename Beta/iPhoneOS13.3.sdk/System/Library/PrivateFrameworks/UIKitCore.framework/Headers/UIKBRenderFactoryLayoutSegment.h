/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIKBRenderTraits;

__attribute__((visibility("hidden")))
@interface UIKBRenderFactoryLayoutSegment : NSObject

{
    int _rectCount;
    struct CGRect _rects[10];
    unsigned long long _triangleCorners[10];
    int _edgeCount;
    unsigned long long _edges[10];
    NSString *_cachedKeyNames[10];
    _Bool _requireAllMatches;
    int _states;
    UIKBRenderTraits *_traits;
}

@property (nonatomic, readonly) UIKBRenderTraits *traits;
@property (nonatomic) int keyStates;
@property (nonatomic) _Bool requireAllMatches;

+ (id)segmentWithTraits:(id)arg1;

- (void)dealloc;
- (id)initWithTraits:(id)arg1;
- (void)addLayoutRect:(struct CGRect)arg1 asTriangle:(unsigned long long)arg2;
- (void)addRelativeLayoutRectFromEdge:(unsigned long long)arg1 ofCachedKey:(id)arg2;
- (_Bool)containsPoint:(struct CGPoint)arg1 inRect:(struct CGRect)arg2 withKeyplane:(id)arg3;

@end
