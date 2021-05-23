/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <DifferentialPrivacy/_DPOBHRecord.h>

@class NSString;

@interface _DPOBHSequenceRecord : _DPOBHRecord

{
    _Bool _sequenceBitValue;
    long long _sequenceBitPosition;
    NSString *_plainSequence;
}

@property (nonatomic) long long sequenceBitPosition;
@property (nonatomic) _Bool sequenceBitValue;
@property (retain, nonatomic) NSString *plainSequence;

+ (id)entityName;
+ (id)recordWithKey:(id)arg1 sequence:(id)arg2 bitPosition:(long long)arg3 bitValue:(_Bool)arg4 creationDate:(double)arg5 submitted:(_Bool)arg6 objectId:(id)arg7;

- (id)description;
- (_Bool)copyToManagedObject:(id)arg1;
- (id)jsonString;
- (_Bool)copyFromManagedObject:(id)arg1;
- (id)initWithKey:(id)arg1 sequence:(id)arg2 bitPosition:(long long)arg3 bitValue:(_Bool)arg4 creationDate:(double)arg5 submitted:(_Bool)arg6 objectId:(id)arg7;

@end
