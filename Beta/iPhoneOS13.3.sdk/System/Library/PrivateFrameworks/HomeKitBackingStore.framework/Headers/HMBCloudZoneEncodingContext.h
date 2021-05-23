/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HomeKitBackingStore/HMBModelContainerEncodingContext.h>

@class NSMutableDictionary;

@interface HMBCloudZoneEncodingContext : HMBModelContainerEncodingContext

{
    NSMutableDictionary *_createdRecords;
}

@property (nonatomic, readonly) NSMutableDictionary *createdRecords;

- (id)init;

@end
