/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@class NSData, NSMutableArray, NSString;

@interface QueryRequest

@property (nonatomic) int version;
@property (nonatomic) int application;
@property (copy, nonatomic) NSString *uri;
@property (retain, nonatomic) NSMutableArray *devicesArray;
@property (nonatomic, readonly) unsigned long long devicesArray_Count;
@property (copy, nonatomic) NSData *accountId;

+ (id)descriptor;

@end
