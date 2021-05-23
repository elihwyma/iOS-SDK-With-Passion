/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSString, TSWPRangeMap;

@protocol TSWPTextSource;

@interface TSWPRubyTextSource : NSObject

{
    vector_06e666a8 _spaceCharIndexes;
    vector_06e666a8 _bidiCharIndexes;
    id <TSWPTextSource> _source;
    TSWPRangeMap *_rangeMap;
    unsigned long long _length;
    unsigned long long _storageLength;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)string;
- (void)dealloc;
- (unsigned long long)length;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (id).cxx_construct;
- (struct _NSRange)wordAtCharIndex:(unsigned long long)arg1 includePreviousWord:(_Bool)arg2;
- (id)characterStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)paragraphStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (_Bool)isWritingDirectionRightToLeftForParagraphAtCharIndex:(unsigned long long)arg1;
- (void)attributesAtCharIndex:(unsigned long long)arg1 attributesOfInterest:(_Bool [19])arg2 attributesTable:(id [19])arg3 effectiveRange:(struct _NSRange *)arg4;
- (unsigned int)composedCharacterAtCharIndex:(unsigned long long)arg1 isSurrogatePair:(_Bool *)arg2;
- (unsigned long long)storageLength;
- (_Bool)adjustRangesByDelta:(long long)arg1;
- (_Bool)hasColumnBreakAtCharIndex:(unsigned long long)arg1;
- (_Bool)hasColumnStyleForParagraphBreakAtCharIndex:(unsigned long long)arg1;
- (double)filteredCoreTextAttributesFontScaleEffectiveRange:(struct _NSRange *)arg1 filterDelegate:(id)arg2;
- (struct __CFDictionary *)createFilteredCoreTextAttributes:(struct __CFDictionary *)arg1 effectiveRange:(struct _NSRange *)arg2 filterDelegate:(id)arg3;
- (id)smartFieldAtCharIndex:(unsigned long long)arg1 attributeKind:(unsigned int)arg2 effectiveRange:(struct _NSRange *)arg3;
- (id)smartFieldsWithAttributeKind:(unsigned int)arg1 intersectingRange:(struct _NSRange)arg2;
- (id)footnoteReferenceAtCharIndex:(unsigned long long)arg1;
- (id)attachmentAtCharIndex:(unsigned long long)arg1;
- (id)attachmentOrFootnoteAtCharIndex:(unsigned long long)arg1;
- (id)objectAtLocationPriorToMappedCharIndex:(unsigned long long)arg1 forAttributeKind:(unsigned int)arg2 effectiveRange:(struct _NSRange *)arg3;
- (unsigned long long)charIndexMappedToStorage:(unsigned long long)arg1;
- (unsigned long long)charIndexMappedFromStorage:(unsigned long long)arg1;
- (struct _NSRange)charRangeMappedToStorage:(struct _NSRange)arg1;
- (struct _NSRange)charRangeMappedFromStorage:(struct _NSRange)arg1;
- (long long)hyphenationLocationBeforeIndex:(long long)arg1 inRange:(struct _NSRange)arg2 locale:(struct __CFLocale *)arg3 hyphenChar:(unsigned int *)arg4;
- (unsigned long long)charIndexRemappedFromStorage:(unsigned long long)arg1;
- (id)initWithSource:(id)arg1 subRange:(struct _NSRange)arg2;

@end
