/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <DifferentialPrivacy/_DPCMSSequenceRecord.h>

@class NSData, NSString;

@interface _DPCMSWordRecord : _DPCMSSequenceRecord

{
    short _fragmentPosition;
    short _fragmentHashIndex;
    NSData *_fragment;
    NSString *_plainFragment;
}

@property (retain, nonatomic) NSData *fragment;
@property (nonatomic) short fragmentPosition;
@property (nonatomic) short fragmentHashIndex;
@property (copy, nonatomic) NSString *plainFragment;

+ (id)entityName;

- (id)description;
- (_Bool)copyToManagedObject:(id)arg1;
- (id)jsonString;
- (_Bool)copyFromManagedObject:(id)arg1;
- (id)initWithKey:(id)arg1 plainSequence:(id)arg2 sequence:(id)arg3 sequenceHashIndex:(unsigned short)arg4 plainFragment:(id)arg5 fragment:(id)arg6 fragmentHashIndex:(unsigned short)arg7 fragmentPosition:(unsigned short)arg8 creationDate:(double)arg9 submitted:(_Bool)arg10 objectId:(id)arg11;

@end
