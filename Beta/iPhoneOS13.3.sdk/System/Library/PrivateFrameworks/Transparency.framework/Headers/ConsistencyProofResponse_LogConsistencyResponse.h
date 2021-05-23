/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@class NSMutableArray, SignedLogHead;

@interface ConsistencyProofResponse_LogConsistencyResponse

@property (nonatomic) int logType;
@property (nonatomic) int application;
@property (retain, nonatomic) SignedLogHead *startSlh;
@property (nonatomic) _Bool hasStartSlh;
@property (retain, nonatomic) SignedLogHead *endSlh;
@property (nonatomic) _Bool hasEndSlh;
@property (retain, nonatomic) NSMutableArray *proofHashesArray;
@property (nonatomic, readonly) unsigned long long proofHashesArray_Count;

+ (id)descriptor;

@end
