/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <MediaServices/MSVLyricsTextElement.h>

@class MSVLyricsLine;

@interface MSVLyricsWord : MSVLyricsTextElement

{
    MSVLyricsLine *_parentLine;
    MSVLyricsWord *_nextWord;
}

@property (retain, nonatomic) MSVLyricsLine *parentLine;
@property (retain, nonatomic) MSVLyricsWord *nextWord;

- (id)init;

@end
