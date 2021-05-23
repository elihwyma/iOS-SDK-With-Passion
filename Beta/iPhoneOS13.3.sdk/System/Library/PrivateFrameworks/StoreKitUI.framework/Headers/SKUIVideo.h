/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSURL;

@protocol SKUIArtworkProviding;

__attribute__((visibility("hidden")))
@interface SKUIVideo : NSObject

{
    id <SKUIArtworkProviding> _artworks;
    NSURL *_url;
}

@property (nonatomic, readonly) id <SKUIArtworkProviding> artworks;
@property (nonatomic, readonly) NSURL *URL;

- (id)initWithVideoDictionary:(id)arg1;

@end
