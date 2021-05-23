/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <MediaServices/MSVLyricsXMLElement.h>

@class NSString;

@interface MSVLyricsSongWriter : MSVLyricsXMLElement

{
    NSString *_name;
    NSString *_artistID;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *artistID;

- (id)init;
- (id)description;

@end
