/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HMFoundation/HMFObject.h>

@class HMBProcessingOptions, NAFuture, NSArray;

@interface HMBProcessingResult : HMFObject

{
    HMBProcessingOptions *_options;
    NSArray *_actions;
    NAFuture *_mirrorOutputResult;
}

@property (nonatomic, readonly) HMBProcessingOptions *options;
@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, readonly) NAFuture *mirrorOutputResult;

- (id)initWithOptions:(id)arg1 actions:(id)arg2 mirrorOutputResult:(id)arg3;

@end
