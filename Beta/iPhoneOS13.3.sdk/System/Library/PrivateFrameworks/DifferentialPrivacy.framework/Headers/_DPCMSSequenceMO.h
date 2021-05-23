/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <DifferentialPrivacy/_DPCMSRecordMO.h>

@class NSData, NSString;

@interface _DPCMSSequenceMO : _DPCMSRecordMO

@property (retain, nonatomic) NSData *sequence;
@property (nonatomic) short sequenceHashIndex;
@property (retain, nonatomic) NSString *plainSequence;

@end
