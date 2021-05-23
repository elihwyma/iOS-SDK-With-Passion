/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HMFoundation/HMFObject.h>

@class HMBModel, NSData;

__attribute__((visibility("hidden")))
@interface HMBLocalSQLContextRecord : HMFObject

{
    HMBModel *_model;
    NSData *_externalID;
}

@property (nonatomic, readonly) HMBModel *model;
@property (nonatomic, readonly) NSData *externalID;

- (id)attributeDescriptions;
- (id)initWithModel:(id)arg1 externalID:(id)arg2;

@end
