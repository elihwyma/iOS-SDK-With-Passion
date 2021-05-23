/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSString, WLKArtworkVariant;

@interface WLKMovieClipPreviewArtwork : NSObject

{
    _Bool _supportsLayeredImage;
    NSString *_bgColor;
    NSString *_textColor1;
    NSString *_textColor2;
    NSString *_textColor3;
    NSString *_textColor4;
    NSString *_url;
    struct CGSize _artworkSize;
}

@property (nonatomic, readonly) struct CGSize artworkSize;
@property (nonatomic, readonly) _Bool supportsLayeredImage;
@property (copy, nonatomic, readonly) NSString *bgColor;
@property (copy, nonatomic, readonly) NSString *textColor1;
@property (copy, nonatomic, readonly) NSString *textColor2;
@property (copy, nonatomic, readonly) NSString *textColor3;
@property (copy, nonatomic, readonly) NSString *textColor4;
@property (copy, nonatomic, readonly) NSString *url;
@property (nonatomic, readonly) WLKArtworkVariant *artworkVariant;

- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)_init;

@end
