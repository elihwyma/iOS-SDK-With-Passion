/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString, PLAssetsdConnectionAuthorization;

@interface PLAssetsdDemoService : NSObject

{
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cleanupForStoreDemoMode;
- (void)hasCompletedRestorePostProcessingWithReply:(CDUnknownBlockType)arg1;
- (void)hasCompletedMomentAnalysisWithReply:(CDUnknownBlockType)arg1;
- (id)initWithConnectionAuthorization:(id)arg1;

@end
