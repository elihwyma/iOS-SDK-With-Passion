/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class VUIAutoPlayConfig, VUINowPlayingConfig, VUIPostPlayConfig;

__attribute__((visibility("hidden")))
@interface VUIFeaturesConfiguration : NSObject

{
    VUIPostPlayConfig *_postPlayConfig;
    VUINowPlayingConfig *_nowPlayingConfig;
    VUIAutoPlayConfig *_autoPlayConfig;
}

@property (nonatomic, readonly) VUIPostPlayConfig *postPlayConfig;
@property (nonatomic, readonly) VUINowPlayingConfig *nowPlayingConfig;
@property (nonatomic, readonly) VUIAutoPlayConfig *autoPlayConfig;

+ (id)sharedInstance;

- (id)init;
- (void)updateWithDictionary:(id)arg1;

@end
