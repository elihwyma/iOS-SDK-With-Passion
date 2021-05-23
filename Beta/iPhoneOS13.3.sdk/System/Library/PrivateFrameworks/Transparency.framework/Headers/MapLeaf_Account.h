/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@class NSData, NSMutableArray;

@interface MapLeaf_Account

@property (copy, nonatomic) NSData *accountId;
@property (retain, nonatomic) NSMutableArray *devicesArray;
@property (nonatomic, readonly) unsigned long long devicesArray_Count;

+ (id)descriptor;

@end
