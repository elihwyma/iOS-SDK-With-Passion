/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface ISiosDocumentRecipe : NSObject

{
    unsigned long long _options;
}

@property (nonatomic) unsigned long long options;

- (id)init;
- (id)layerTreeForSize:(struct CGSize)arg1 scale:(double)arg2;
- (struct CGSize)badgeSizeForSize:(struct CGSize)arg1 scale:(double)arg2;

@end
