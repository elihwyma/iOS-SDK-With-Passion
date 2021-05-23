/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <DifferentialPrivacy/_DPCMSSequenceRecord.h>

@interface _DPHCMSSequenceRecord : _DPCMSSequenceRecord

{
    int _sequenceBitIndex;
}

@property (nonatomic) int sequenceBitIndex;

+ (id)entityName;

- (id)description;
- (_Bool)copyToManagedObject:(id)arg1;
- (id)jsonString;
- (_Bool)copyFromManagedObject:(id)arg1;
- (id)initWithKey:(id)arg1 plainSequence:(id)arg2 sequence:(id)arg3 sequenceHashIndex:(unsigned short)arg4 sequenceBitIndex:(unsigned int)arg5 creationDate:(double)arg6 submitted:(_Bool)arg7 objectId:(id)arg8;

@end
