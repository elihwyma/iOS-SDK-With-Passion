/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@interface PXLayoutPerformerOutput : NSObject

{
    struct CGRect *_layoutRects;
    long long _capacity;
    long long _lastIndex;
}

@property (nonatomic, readonly) long long count;

- (void)dealloc;
- (id)initWithCapacity:(long long)arg1;
- (void)appendLayoutRect:(struct CGRect)arg1;
- (void)removeAllRects;
- (struct CGRect)layoutRectAtIndex:(long long)arg1;

@end
