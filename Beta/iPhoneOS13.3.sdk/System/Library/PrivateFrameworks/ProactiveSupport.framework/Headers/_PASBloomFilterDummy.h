/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <ProactiveSupport/_PASBloomFilter.h>

@interface _PASBloomFilterDummy : _PASBloomFilter

{
    _Bool _result;
}

+ (id)instanceThatAlwaysReturns:(_Bool)arg1;

- (id)initWithResult:(_Bool)arg1;
- (_Bool)getWithHashes:(id)arg1;

@end
