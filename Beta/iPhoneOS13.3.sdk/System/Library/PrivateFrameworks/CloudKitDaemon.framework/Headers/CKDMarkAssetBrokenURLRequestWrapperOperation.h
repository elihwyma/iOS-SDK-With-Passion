/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDOperation.h>

@class CKDMarkAssetBrokenURLRequest;

__attribute__((visibility("hidden")))
@interface CKDMarkAssetBrokenURLRequestWrapperOperation : CKDOperation

{
    CKDMarkAssetBrokenURLRequest *_urlRequest;
}

@property (retain, nonatomic) CKDMarkAssetBrokenURLRequest *urlRequest;

- (void)main;
- (id)activityCreate;
- (_Bool)shouldCheckAppVersion;

@end
