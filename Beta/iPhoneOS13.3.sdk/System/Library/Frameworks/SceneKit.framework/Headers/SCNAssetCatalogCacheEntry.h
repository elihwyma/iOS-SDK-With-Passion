/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface SCNAssetCatalogCacheEntry : NSObject

{
    id item;
    double timestamp;
}

@property (retain, nonatomic) id item;
@property (nonatomic) double timestamp;

- (void)dealloc;

@end
