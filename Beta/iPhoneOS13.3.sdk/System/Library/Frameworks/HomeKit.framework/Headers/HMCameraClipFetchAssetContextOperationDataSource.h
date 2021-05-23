/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMCameraClipFetchAssetContextOperationDataSource : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)dataTaskWithURL:(id)arg1 httpHeaderFields:(id)arg2;
- (id)dataFromEncryptedDataContext:(id)arg1 usingDecryptionManager:(id)arg2;
- (_Bool)writeData:(id)arg1 toFileURL:(id)arg2 error:(id *)arg3;
- (id)outputStreamToFileAtURL:(id)arg1 shouldAppend:(_Bool)arg2;

@end
