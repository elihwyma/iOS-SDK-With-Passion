/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <MediaServices/MSVLyricsXMLElement.h>

@class NSString;

@interface MSVLyricsTranslationText : MSVLyricsXMLElement

{
    NSString *_lyricsLineKey;
}

@property (copy, nonatomic) NSString *lyricsLineKey;

- (id)init;
- (id)description;

@end
