/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSDictionary;

@interface PKPaymentHeroImageManifest : NSObject

{
    NSDictionary *_images;
}

@property (nonatomic, readonly) NSDictionary *images;

+ (id)manifestFileForRegion:(id)arg1;
+ (void)saveManifestDataToDeviceForRegion:(id)arg1 data:(id)arg2;
+ (_Bool)manifestFileExistsForRegion:(id)arg1;
+ (void)removeManifestFileForRegion:(id)arg1;
+ (id)manifestForRegion:(id)arg1;
+ (void)downloadManifestForRegion:(id)arg1 url:(id)arg2 fileDownloader:(id)arg3 completion:(CDUnknownBlockType)arg4;

- (id)initWithDictionary:(id)arg1;

@end
