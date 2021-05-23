/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <MediaServices/MSVLyricsElement.h>

@class NSAttributedString;

@interface MSVLyricsTextElement : MSVLyricsElement

{
    NSAttributedString *_lyricsText;
}

@property (copy, nonatomic) NSAttributedString *lyricsText;

- (id)init;
- (id)description;

@end
