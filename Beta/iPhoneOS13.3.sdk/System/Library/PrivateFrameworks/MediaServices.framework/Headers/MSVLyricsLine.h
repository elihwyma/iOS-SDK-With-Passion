/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <MediaServices/MSVLyricsTextElement.h>

@class MSVLyricsSection, NSArray, NSString;

@interface MSVLyricsLine : MSVLyricsTextElement

{
    _Bool _instrumentalBreak;
    long long _lineIndex;
    long long _originalLineIndex;
    MSVLyricsSection *_parentSection;
    MSVLyricsLine *_nextLine;
    NSArray *_words;
    NSString *_translationKey;
}

@property (nonatomic, getter=isInstrumentalBreak) _Bool instrumentalBreak;
@property (nonatomic) long long lineIndex;
@property (nonatomic) long long originalLineIndex;
@property (weak, nonatomic) MSVLyricsSection *parentSection;
@property (retain, nonatomic) MSVLyricsLine *nextLine;
@property (retain, nonatomic) NSArray *words;
@property (copy, nonatomic) NSString *translationKey;

- (id)init;
- (id)description;
- (_Bool)containsTimeOffset:(double)arg1 withErrorMargin:(double)arg2;

@end
