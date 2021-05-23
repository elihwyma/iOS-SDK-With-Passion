/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSPointerArray.h>

@interface NSPointerArray (TSUAdditions)

- (void)tsu_enumerateNonNullPointersUsingBlock:(CDUnknownBlockType)arg1;
- (void)tsu_insertRange:(struct _NSRange)arg1;
- (unsigned long long)tsu_indexOfPointer:(void *)arg1;

@end
