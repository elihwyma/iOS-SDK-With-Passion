/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <DifferentialPrivacy/_DPCMSWordRecord.h>

@interface _DPHCMSWordRecord : _DPCMSWordRecord

{
    int _fragmentBitIndex;
    int _sequenceBitIndex;
}

@property (nonatomic) int fragmentBitIndex;
@property (nonatomic) int sequenceBitIndex;

+ (id)entityName;

- (id)description;
- (_Bool)copyToManagedObject:(id)arg1;
- (id)jsonString;
- (_Bool)copyFromManagedObject:(id)arg1;
- (id)initWithKey:(id)arg1 plainSequence:(id)arg2 sequence:(id)arg3 sequenceHashIndex:(unsigned short)arg4 sequenceBitIndex:(unsigned int)arg5 plainFragment:(id)arg6 fragment:(id)arg7 fragmentHashIndex:(unsigned short)arg8 fragmentBitIndex:(unsigned int)arg9 fragmentPosition:(unsigned short)arg10 creationDate:(double)arg11 submitted:(_Bool)arg12 objectId:(id)arg13;

@end
