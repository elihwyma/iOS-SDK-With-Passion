/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/MLChapterTOC.h>

@interface MLITChapterTOC : MLChapterTOC

{
    unsigned int _totalTimeInMS;
    struct ChapterData *_chapterDataRef;
    unsigned int *_picCookieIndexMap;
    unsigned int *_urlCookieIndexMap;
    unsigned int *_nameCookieIndexMap;
}

+ (void)enumerateArtworkCacheIDsInFlattenedChapterData:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (void)enumerateChapterTimesInFlattenedChapterData:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (unsigned int **)_chapterDataCookieIndexMapForProperty:(int)arg1 ofChapterTOC:(id)arg2;

- (void)dealloc;
- (id)urlTitleTrimmingCharacterSet;
- (id)urlTitlePropertyOfChapterAtIndex:(unsigned int)arg1;
- (id)urlPropertyOfChapterAtIndex:(unsigned int)arg1;
- (id)titlePropertyOfChapterAtIndex:(unsigned int)arg1;
- (unsigned int)durationInMSOfGroupAtIndex:(unsigned int)arg1 groupingProperty:(int)arg2;
- (unsigned int)timeLocationInMSOfChapterAtIndex:(unsigned int)arg1;
- (unsigned int)chapterIndexForGroupIndex:(unsigned int)arg1 groupingProperty:(int)arg2;
- (unsigned int)countOfGroupsForProperty:(int)arg1;
- (unsigned int)countOfChapters;
- (id)initWithChapterDataRef:(struct ChapterData *)arg1 totalTimeInMS:(unsigned int)arg2;
- (struct ChapterData *)chapterDataRef;
- (unsigned int *)_cachedCookieIndexMapForProperty:(int)arg1 createIfNecessary:(_Bool)arg2;
- (unsigned int)totalTimeInMS;
- (unsigned int)groupIndexForChapterIndex:(unsigned int)arg1 groupingProperty:(int)arg2;
- (unsigned int)groupIndexAtTimeLocationInMS:(unsigned int)arg1 groupingProperty:(int)arg2;
- (unsigned int)timeLocationInMSOfGroupAtIndex:(unsigned int)arg1 groupingProperty:(int)arg2;

@end
