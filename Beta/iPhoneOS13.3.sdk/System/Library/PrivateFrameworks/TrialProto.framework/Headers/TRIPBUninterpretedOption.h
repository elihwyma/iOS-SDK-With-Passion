/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class NSData, NSMutableArray, NSString;

@interface TRIPBUninterpretedOption : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *nameArray;
@property (nonatomic, readonly) unsigned long long nameArray_Count;
@property (copy, nonatomic) NSString *identifierValue;
@property (nonatomic) _Bool hasIdentifierValue;
@property (nonatomic) unsigned long long positiveIntValue;
@property (nonatomic) _Bool hasPositiveIntValue;
@property (nonatomic) long long negativeIntValue;
@property (nonatomic) _Bool hasNegativeIntValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) _Bool hasDoubleValue;
@property (copy, nonatomic) NSData *stringValue;
@property (nonatomic) _Bool hasStringValue;
@property (copy, nonatomic) NSString *aggregateValue;
@property (nonatomic) _Bool hasAggregateValue;

+ (id)descriptor;

@end
