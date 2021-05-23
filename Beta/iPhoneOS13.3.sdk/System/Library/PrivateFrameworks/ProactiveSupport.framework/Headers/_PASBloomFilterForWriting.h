/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <ProactiveSupport/_PASBloomFilter.h>

@interface _PASBloomFilterForWriting : _PASBloomFilter

+ (id)bloomFilterInMemoryWithNumberOfValuesN:(unsigned long long)arg1 errorRateP:(float)arg2;

- (_Bool)saveToFile:(id)arg1;
- (void)setWithHashes:(id)arg1;

@end
