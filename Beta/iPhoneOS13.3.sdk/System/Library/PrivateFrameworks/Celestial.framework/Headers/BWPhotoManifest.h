/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@interface BWPhotoManifest : NSObject

{
    NSArray *_photoDescriptors;
    NSString *_captureRequestIdentifier;
    struct os_unfair_lock_s _bufferPtrValueToPhotoDescriptorLock;
    NSMutableDictionary *_bufferPtrValueToPhotoDescriptor;
}

@property (nonatomic, readonly) NSArray *photoDescriptors;
@property (nonatomic, readonly) NSString *captureRequestIdentifier;

- (void)dealloc;
- (id)description;
- (id)descriptorForSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (id)descriptorForIdentifier:(id)arg1;
- (id)initWithDescriptors:(id)arg1 captureRequestIdentifier:(id)arg2;

@end
