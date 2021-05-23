/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <MediaServices/MSVLyricsXMLElement.h>

@class NSString;

@interface MSVLyricsAgent : MSVLyricsXMLElement

{
    NSString *_type;
    NSString *_name;
    NSString *_artistID;
}

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *artistID;

- (id)description;

@end
