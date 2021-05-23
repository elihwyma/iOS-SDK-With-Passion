/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@class NSData;

@interface _DPHCMSSample : NSObject

{
    unsigned long long _hashFunctionIndex;
    unsigned long long _bitIndex;
    NSData *_bitString;
}

@property (nonatomic, readonly) unsigned long long hashFunctionIndex;
@property (nonatomic, readonly) unsigned long long bitIndex;
@property (nonatomic, readonly) NSData *bitString;

+ (id)dataFor:(id)arg1 hashAtIndex:(unsigned long long)arg2 epsilon:(double)arg3 bitCount:(unsigned long long)arg4 bitIndex:(unsigned long long)arg5;
+ (id)convertDataToString:(id)arg1;
+ (id)hcmsSampleWith:(id)arg1 privacyParameter:(double)arg2 hashFunctionCount:(unsigned long long)arg3 bitCount:(unsigned long long)arg4;
+ (id)jsonStringFrom:(id)arg1 hashIndex:(unsigned long long)arg2 bitIndex:(unsigned long long)arg3;
+ (id)jsonStringFromSequence:(id)arg1 sequenceHashIndex:(unsigned short)arg2 sequencebitIndex:(unsigned long long)arg3 fragment:(id)arg4 fragmentHashIndex:(unsigned short)arg5 fragmentbitIndex:(unsigned long long)arg6 fragmentPosition:(unsigned short)arg7;

- (id)init;
- (id)initWith:(id)arg1 privacyParameter:(double)arg2 hashFunctionCount:(unsigned long long)arg3 bitCount:(unsigned long long)arg4;

@end
