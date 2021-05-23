/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSData, NSURL, PHExternalAssetResource;

@interface PHAssetResourceValidatedContext : NSObject

{
    PHExternalAssetResource *_resource;
    NSURL *_validatedURL;
    NSData *_validatedData;
}

@property (nonatomic, readonly) PHExternalAssetResource *resource;
@property (nonatomic, readonly) NSURL *validatedURL;
@property (nonatomic, readonly) NSData *validatedData;

- (id)initWithResource:(id)arg1 validatedURL:(id)arg2 validatedData:(id)arg3;

@end
