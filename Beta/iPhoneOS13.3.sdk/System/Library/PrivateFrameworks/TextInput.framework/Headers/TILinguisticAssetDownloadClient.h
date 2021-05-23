/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@interface TILinguisticAssetDownloadClient : NSObject

+ (id)_dispatchQueue;
+ (CDUnknownBlockType)_internalHandlerForHandler:(CDUnknownBlockType)arg1 connection:(id)arg2;

- (void)requestLinguisticAssetsForLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_newXPCConnection;

@end
