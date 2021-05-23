/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <Foundation/NSObject.h>

@class NSString, PSCloudStorageOffersManager;

@interface AAUICloudStorageOffersManager : NSObject

{
    PSCloudStorageOffersManager *_cloudStorageOffersManager;
    CDUnknownBlockType _completionHandler;
}

@property (retain, nonatomic) PSCloudStorageOffersManager *cloudStorageOffersManager;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)manager:(id)arg1 loadDidFailWithError:(id)arg2;
- (void)managerDidCancel:(id)arg1;
- (void)manager:(id)arg1 didCompleteWithError:(id)arg2;
- (void)presentCloudStorageOffersPageFromNavigationController:(id)arg1 requiredStorageThreshold:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
