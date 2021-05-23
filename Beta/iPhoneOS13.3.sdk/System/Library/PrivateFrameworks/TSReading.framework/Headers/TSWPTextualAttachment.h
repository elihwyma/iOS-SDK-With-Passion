/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSWPAttachment.h>

@interface TSWPTextualAttachment : TSWPAttachment

- (id)stringEquivalent;
- (_Bool)shouldArchiveStringEquivalent;
- (id)stringWithPageNumber:(unsigned long long)arg1 pageCount:(unsigned long long)arg2 charIndex:(unsigned long long)arg3;
- (void)setStringEquivalent:(id)arg1;
- (id)stringEquivalentWithLayoutParent:(id)arg1;

@end
