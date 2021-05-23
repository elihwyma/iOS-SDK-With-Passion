/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <ProactiveSupport/Swift-Protocol.h>

@class NSString;

@protocol _PASAssetProtocol <Swift>

@property (nonatomic, readonly) unsigned long long assetVersion;
@property (nonatomic, readonly) NSString *assetType;
@property (nonatomic, readonly) unsigned long long compatibilityVersion;
@property (nonatomic, readonly) unsigned long long bestAssetVersionObserved;

- (unsigned short)registerUpdateHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)deregisterUpdateHandlerAsyncWithToken: /* Error: Ran out of types for this method. */;
- (unsigned short)pathForResourceWithName:extension: /* Error: Ran out of types for this method. */;

@end
