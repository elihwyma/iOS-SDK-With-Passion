/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, WLKMovieClipAsset, WLKMovieClipPreviewArtwork;

@interface WLKMovieClip : NSObject

{
    NSString *_title;
    WLKMovieClipPreviewArtwork *_previewArtwork;
    NSArray *_assets;
    NSString *_hlsUrl;
}

@property (copy, nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) WLKMovieClipPreviewArtwork *previewArtwork;
@property (copy, nonatomic, readonly) NSArray *assets;
@property (nonatomic, readonly) WLKMovieClipAsset *preferredAsset;
@property (copy, nonatomic, readonly) NSString *hlsUrl;

+ (id)movieClipsWithArray:(id)arg1;

- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)_init;
- (id)preferredURL;
- (_Bool)_supportHD;

@end
