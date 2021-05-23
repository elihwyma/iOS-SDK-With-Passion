/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@class NSData, NSMutableArray;

@interface QueryRequest_Device

@property (copy, nonatomic) NSData *deviceId;
@property (retain, nonatomic) NSMutableArray *clientDataArray;
@property (nonatomic, readonly) unsigned long long clientDataArray_Count;

+ (id)descriptor;

@end
