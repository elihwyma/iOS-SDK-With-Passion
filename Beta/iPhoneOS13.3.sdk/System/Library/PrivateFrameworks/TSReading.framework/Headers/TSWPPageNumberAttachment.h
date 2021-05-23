/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSWPNumberAttachment.h>

@interface TSWPPageNumberAttachment : TSWPNumberAttachment

- (int)elementKind;
- (_Bool)shouldArchiveStringEquivalent;
- (id)stringWithPageNumber:(unsigned long long)arg1 pageCount:(unsigned long long)arg2 charIndex:(unsigned long long)arg3;
- (_Bool)changesWithPageNumber;

@end
