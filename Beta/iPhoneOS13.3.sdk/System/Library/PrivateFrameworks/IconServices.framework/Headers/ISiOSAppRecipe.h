/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface ISiOSAppRecipe : NSObject

{
    _Bool _shouldDrawBorder;
    unsigned long long _options;
}

@property (nonatomic) unsigned long long options;
@property _Bool shouldApplyMask;
@property _Bool shouldDrawBorder;

- (id)layerTreeForSize:(struct CGSize)arg1 scale:(double)arg2;

@end
