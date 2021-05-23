/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSString.h>

@class TSWPDeletionRangeMap, TSWPRangeArray;

@interface TSWPFilteredString : NSString

{
    unsigned long long _length;
    NSString *_sourceString;
    TSWPDeletionRangeMap *_rangeMap;
    TSWPRangeArray *_sourceRanges;
}

@property (retain, nonatomic) NSString *sourceString;
@property (retain, nonatomic) TSWPDeletionRangeMap *rangeMap;
@property (nonatomic, readonly) unsigned long long length;
@property (retain, nonatomic, readonly) TSWPRangeArray *sourceRanges;

- (void)dealloc;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (unsigned long long)charIndexMappedToStorage:(unsigned long long)arg1;
- (unsigned long long)charIndexMappedFromStorage:(unsigned long long)arg1;
- (struct _NSRange)charRangeMappedToStorage:(struct _NSRange)arg1;
- (struct _NSRange)charRangeMappedFromStorage:(struct _NSRange)arg1;
- (id)initWithString:(id)arg1 subrange:(struct _NSRange)arg2 removeRanges:(id)arg3;

@end
