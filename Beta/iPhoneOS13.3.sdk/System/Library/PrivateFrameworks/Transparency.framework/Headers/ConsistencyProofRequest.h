/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@class NSMutableArray;

@interface ConsistencyProofRequest

@property (nonatomic) int version;
@property (retain, nonatomic) NSMutableArray *requestsArray;
@property (nonatomic, readonly) unsigned long long requestsArray_Count;

+ (id)descriptor;

@end
