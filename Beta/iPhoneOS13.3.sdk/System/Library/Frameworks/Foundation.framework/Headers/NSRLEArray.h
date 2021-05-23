/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@interface NSRLEArray : NSObject <Swift>

{
    struct _NSRefCountedRunArray *theList;
}

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)objectAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2 runIndex:(unsigned long long *)arg3;
- (id)objectAtRunIndex:(unsigned long long)arg1 length:(unsigned long long *)arg2;
- (id)initWithRefCountedRunArray:(struct _NSRefCountedRunArray *)arg1;
- (void)_makeNewListFrom:(struct _NSRefCountedRunArray *)arg1;

@end
