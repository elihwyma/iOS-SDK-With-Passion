/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@interface TSWPRangeArray : NSObject <Swift>

{
    void *_rangeVectorOpaque;
}

@property (nonatomic, readonly) unsigned long long rangeCount;
@property (nonatomic, readonly) _Bool isEmpty;
@property (nonatomic, readonly) unsigned long long start;
@property (nonatomic, readonly) unsigned long long finish;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct _NSRange)rangeAtIndex:(unsigned long long)arg1;
- (void)enumerateRangesUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithRange:(struct _NSRange)arg1;
- (void)addRange:(struct _NSRange)arg1;
- (id)initWithRangeVector:(const void *)arg1;
- (struct _NSRange *)rangeReferenceAtIndex:(unsigned long long)arg1;
- (void)removeRange:(struct _NSRange)arg1;
- (void)enumerateRangesInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;

@end
