/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <MediaServices/MSVLyricsXMLElement.h>

@class NSString;

@interface MSVLyricsTranslation : MSVLyricsXMLElement

{
    NSString *_language;
}

@property (copy, nonatomic) NSString *language;

- (id)description;

@end
