/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HMFoundation/HMFObject.h>

@class HMBProcessingOptions;

@interface HMBMirrorOutputGroup : HMFObject

{
    HMBProcessingOptions *_options;
    unsigned long long _blockRow;
}

@property (nonatomic, readonly) unsigned long long blockRow;
@property (nonatomic, readonly) HMBProcessingOptions *options;

- (id)description;
- (id)initWithBlockRow:(unsigned long long)arg1 options:(id)arg2;

@end
