/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HMFoundation/HMFObject.h>

@class HMBModel, NSData;

__attribute__((visibility("hidden")))
@interface HMBLocalZoneRawUpdateEntry : HMFObject

{
    NSData *_encoded;
    HMBModel *_model;
}

@property (retain, nonatomic) NSData *encoded;
@property (retain, nonatomic) HMBModel *model;

- (id)initWithModel:(id)arg1 encoded:(id)arg2;

@end
