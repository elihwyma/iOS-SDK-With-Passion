/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@interface MLChapterTOC : NSObject

- (id)urlTitlePropertyOfChapterAtIndex:(unsigned int)arg1;
- (id)urlPropertyOfChapterAtIndex:(unsigned int)arg1;
- (id)titlePropertyOfChapterAtIndex:(unsigned int)arg1;
- (unsigned int)durationInMSOfGroupAtIndex:(unsigned int)arg1 groupingProperty:(int)arg2;
- (unsigned int)timeLocationInMSOfChapterAtIndex:(unsigned int)arg1;
- (unsigned int)chapterIndexForGroupIndex:(unsigned int)arg1 groupingProperty:(int)arg2;
- (unsigned int)countOfGroupsForProperty:(int)arg1;
- (unsigned int)countOfChapters;
- (struct ChapterData *)chapterDataRef;
- (unsigned int)chapterIndexAtTimeLocationInMS:(unsigned int)arg1;
- (unsigned int)groupIndexForChapterIndex:(unsigned int)arg1 groupingProperty:(int)arg2;
- (unsigned int)groupIndexAtTimeLocationInMS:(unsigned int)arg1 groupingProperty:(int)arg2;
- (unsigned int)timeLocationInMSOfGroupAtIndex:(unsigned int)arg1 groupingProperty:(int)arg2;
- (_Bool)hasDataForProperty:(int)arg1;

@end
