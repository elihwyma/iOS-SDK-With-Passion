/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class HKDevice, NSArray, NSDictionary, NSUUID;

__attribute__((visibility("hidden")))
@interface _HKDataCollectorPendingBatch : NSObject

{
    NSUUID *_batchUUID;
    NSArray *_data;
    NSDictionary *_metadata;
    HKDevice *_device;
    CDUnknownBlockType _completion;
}

@property (copy, nonatomic, readonly) NSUUID *batchUUID;
@property (copy, nonatomic, readonly) NSArray *data;
@property (copy, nonatomic, readonly) NSDictionary *metadata;
@property (copy, nonatomic, readonly) HKDevice *device;
@property (copy, nonatomic, readonly) CDUnknownBlockType completion;

- (id)init;
- (id)description;
- (id)initWithData:(id)arg1 metadata:(id)arg2 device:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end
