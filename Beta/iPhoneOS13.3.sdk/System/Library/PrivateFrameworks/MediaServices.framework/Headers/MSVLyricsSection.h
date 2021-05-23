/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <MediaServices/MSVLyricsElement.h>

@class NSArray, NSString;

@interface MSVLyricsSection : MSVLyricsElement

{
    long long _songPart;
    NSString *_songPartText;
    NSArray *_lines;
}

@property (nonatomic) long long songPart;
@property (copy, nonatomic) NSString *songPartText;
@property (retain, nonatomic) NSArray *lines;

+ (long long)_songPartForText:(id)arg1;

- (id)init;
- (id)description;

@end
