/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OITSURangeList : NSObject

{
    struct vector<_NSRange, std::__1::allocator<_NSRange>> mRangeList;
}

@property (nonatomic, readonly) unsigned long long count;

- (id)stringValue;
- (struct _NSRange)rangeAtIndex:(unsigned long long)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithRange:(struct _NSRange)arg1;
- (id).cxx_construct;
- (void)reverse;
- (void)addRange:(struct _NSRange)arg1;
- (void)removeRangeAtIndex:(unsigned long long)arg1;
- (void)insertRange:(struct _NSRange)arg1 atIndex:(unsigned long long)arg2;
- (id)initWithRangeList:(id)arg1;
- (void)replaceWithRange:(struct _NSRange)arg1 atIndex:(unsigned long long)arg2;
- (void)consolidate;

@end
