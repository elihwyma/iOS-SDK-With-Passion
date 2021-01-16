//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@class TSWPDeletionRangeMap, TSWPRangeArray;

@interface TSWPFilteredString : NSString
{
    NSUInteger _length;
    NSString *_sourceString;
    TSWPDeletionRangeMap *_rangeMap;
    TSWPRangeArray *_sourceRanges;
}

@property(readonly, retain, nonatomic) TSWPRangeArray *sourceRanges; // @synthesize sourceRanges=_sourceRanges;
@property(retain, nonatomic) TSWPDeletionRangeMap *rangeMap; // @synthesize rangeMap=_rangeMap;
@property(retain, nonatomic) NSString *sourceString; // @synthesize sourceString=_sourceString;
@property(readonly, nonatomic) NSUInteger length; // @synthesize length=_length;
- (NSRange)charRangeMappedFromStorage:(NSRange)arg1;
- (NSRange)charRangeMappedToStorage:(NSRange)arg1;
- (NSUInteger)charIndexMappedFromStorage:(NSUInteger)arg1;
- (NSUInteger)charIndexMappedToStorage:(NSUInteger)arg1;
- (void)getCharacters:(unsigned short )arg1 range:(NSRange)arg2;
- (unsigned short)characterAtIndex:(NSUInteger)arg1;
- (void)dealloc;
- (id)initWithString:(id)arg1 subrange:(NSRange)arg2 removeRanges:(id)arg3;

@end
