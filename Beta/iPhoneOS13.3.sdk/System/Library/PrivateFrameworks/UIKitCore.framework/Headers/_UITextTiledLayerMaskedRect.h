/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UITextTiledLayerMaskedRect : NSObject

{
    double _alpha;
    struct CGRect _boundingRect;
}

@property (nonatomic, readonly) double alpha;
@property (nonatomic, readonly) struct CGRect boundingRect;

+ (id)ghostedRect:(struct CGRect)arg1;
+ (id)rect:(struct CGRect)arg1 alpha:(double)arg2;

- (id)description;
- (id)initWithRect:(struct CGRect)arg1 alpha:(double)arg2;

@end
