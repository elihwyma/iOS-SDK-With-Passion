/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface SXMosaicGalleryCluster : NSObject

{
    NSArray *_items;
}

@property (nonatomic, readonly) NSArray *items;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithItems:(id)arg1;
- (_Bool)isClusterOfType:(int)arg1;
- (_Bool)clusterIsEqualToTileTypes:(id)arg1;

@end
