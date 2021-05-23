/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@interface MPMediaItemArtwork : NSObject

{
    struct CGSize _bounds;
    CDUnknownBlockType _requestHandler;
}

@property (nonatomic, readonly) struct CGRect bounds;
@property (nonatomic, readonly) struct CGRect imageCropRect;

- (id)init;
- (id)initWithImage:(id)arg1;
- (id)initWithBoundsSize:(struct CGSize)arg1 requestHandler:(CDUnknownBlockType)arg2;
- (id)imageWithSize:(struct CGSize)arg1;
- (id)jpegDataWithSize:(struct CGSize)arg1;
- (id)pngDataWithSize:(struct CGSize)arg1;
- (id)pngDataFromImage:(id)arg1;

@end
