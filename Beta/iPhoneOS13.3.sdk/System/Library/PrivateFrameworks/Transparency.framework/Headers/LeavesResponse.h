/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@class NSMutableArray;

@interface LeavesResponse

@property (nonatomic) int status;
@property (nonatomic) int logType;
@property (retain, nonatomic) NSMutableArray *leavesArray;
@property (nonatomic, readonly) unsigned long long leavesArray_Count;

+ (id)descriptor;

@end
