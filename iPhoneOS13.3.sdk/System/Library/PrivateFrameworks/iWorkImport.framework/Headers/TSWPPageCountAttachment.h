//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSWPNumberAttachment.h>

__attribute__((visibility("hidden")))
@interface TSWPPageCountAttachment : TSWPNumberAttachment
{
}

- (BOOL)shouldArchiveStringEquivalent;
- (BOOL)changesWithPageCount;
- (int)elementKind;
- (id)stringWithPageNumber:(NSUInteger)arg1 pageCount:(NSUInteger)arg2 charIndex:(NSUInteger)arg3;
- (void)saveToArchiver:(id)arg1;

@end

