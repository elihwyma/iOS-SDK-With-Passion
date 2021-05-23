/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <DifferentialPrivacy/_DPOBHRecordMO.h>

@class NSString;

@interface _DPOBHSequenceMO : _DPOBHRecordMO

@property (copy, nonatomic) NSString *plainSequence;
@property (nonatomic) long long sequenceBitPosition;
@property (nonatomic) _Bool sequenceBitValue;

+ (id)fetchRequest;

@end
