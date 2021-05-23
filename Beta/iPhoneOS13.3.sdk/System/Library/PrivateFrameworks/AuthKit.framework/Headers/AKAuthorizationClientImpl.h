/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <Foundation/NSObject.h>

@protocol AKAuthorizationUIProvider;

@interface AKAuthorizationClientImpl : NSObject

{
    id <AKAuthorizationUIProvider> _uiProvider;
}

@property (retain) id <AKAuthorizationUIProvider> uiProvider;

- (void)presentAuthorizationUIForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
