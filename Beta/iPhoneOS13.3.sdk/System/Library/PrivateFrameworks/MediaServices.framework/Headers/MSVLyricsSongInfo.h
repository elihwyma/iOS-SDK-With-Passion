/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface MSVLyricsSongInfo : NSObject

{
    long long _type;
    double _songDuration;
    NSArray *_songwriters;
    NSString *_lyricGenId;
    NSString *_language;
    NSArray *_lyricsLines;
    NSArray *_lyricsSections;
    NSDictionary *_translationsMap;
}

@property (nonatomic) long long type;
@property (nonatomic) double songDuration;
@property (retain, nonatomic) NSArray *songwriters;
@property (copy, nonatomic) NSString *lyricGenId;
@property (copy, nonatomic) NSString *language;
@property (retain, nonatomic) NSArray *lyricsSections;
@property (retain, nonatomic) NSArray *lyricsLines;
@property (retain, nonatomic) NSDictionary *translationsMap;
@property (nonatomic, readonly) NSArray *availableTranslations;

+ (id)_elementsInArray:(id)arg1 atTimeOffset:(double)arg2 errorMargin:(double)arg3;
+ (id)_descriptionForLyricsInfoType:(long long)arg1;

- (id)init;
- (id)description;
- (void)setLyricsLinesSortedByStartTime:(id)arg1;
- (id)_sortLyricsLinesByStartTime:(id)arg1;
- (id)lyricsLinesAtTimeOffset:(double)arg1 errorMargin:(double)arg2;
- (id)lyricsWordsAtTimeOffset:(double)arg1 errorMargin:(double)arg2;
- (id)lyricsLineStartingBeforeTimeOffset:(double)arg1;
- (id)translatedTextForLyricsLine:(id)arg1 language:(id)arg2;

@end
