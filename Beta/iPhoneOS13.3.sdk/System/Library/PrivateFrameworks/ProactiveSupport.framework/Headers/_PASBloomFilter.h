/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface _PASBloomFilter : NSObject

{
    CDUnknownFunctionPointerType _computeHashes;
    NSData *_data;
    unsigned int _numBits;
    int _numHashFunctions;
    int _hashArrayLength;
}

+ (id)bloomFilterWithPathToFile:(id)arg1;

- (id)init;
- (_Bool)getWithHashes:(id)arg1;
- (id)initDummy;
- (id)initWithData:(id)arg1 numBits:(unsigned int)arg2 hashFunctionCode:(unsigned int)arg3 numHashFunctions:(int)arg4;
- (id)newHashesArray;
- (int)numHashes;
- (id)computeHashesForString:(id)arg1 reuse:(id)arg2;
- (id)computeHashesWithSeed:(int)arg1 forData:(id)arg2 reuse:(id)arg3;
- (id)_computeHashesWithSeed:(int)arg1 bytes:(const void *)arg2 length:(unsigned long long)arg3 reuse:(id)arg4;
- (id)combineHashesWithSeed:(int)arg1 hashA:(id)arg2 hashB:(id)arg3 reuse:(id)arg4;

@end
