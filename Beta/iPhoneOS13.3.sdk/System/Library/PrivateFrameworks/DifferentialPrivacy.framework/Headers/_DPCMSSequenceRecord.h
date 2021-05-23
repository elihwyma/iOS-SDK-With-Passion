/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <DifferentialPrivacy/_DPCMSRecord.h>

@class NSData, NSString;

@interface _DPCMSSequenceRecord : _DPCMSRecord

{
    short _sequenceHashIndex;
    NSData *_sequence;
    NSString *_plainSequence;
}

@property (retain, nonatomic) NSData *sequence;
@property (nonatomic) short sequenceHashIndex;
@property (copy, nonatomic) NSString *plainSequence;

+ (id)entityName;

- (id)description;
- (_Bool)copyToManagedObject:(id)arg1;
- (id)jsonString;
- (_Bool)copyFromManagedObject:(id)arg1;
- (id)initWithKey:(id)arg1 plainSequence:(id)arg2 sequence:(id)arg3 sequenceHashIndex:(unsigned short)arg4 creationDate:(double)arg5 submitted:(_Bool)arg6 objectId:(id)arg7;

@end
