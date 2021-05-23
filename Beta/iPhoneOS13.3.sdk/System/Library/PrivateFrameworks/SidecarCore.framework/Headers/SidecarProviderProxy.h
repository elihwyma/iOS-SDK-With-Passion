/*
 Image: /System/Library/PrivateFrameworks/SidecarCore.framework/SidecarCore
 */

#import <Foundation/NSObject.h>

@protocol SidecarServiceProviderDelegate;

__attribute__((visibility("hidden")))
@interface SidecarProviderProxy : NSObject

{
    id <SidecarServiceProviderDelegate> _delegate;
}

@property (weak, nonatomic) id <SidecarServiceProviderDelegate> delegate;

+ (id)defaultProxy;

- (id)init;
- (void)sidecarSessionStarted:(id)arg1;
- (void)sidecarSession:(id)arg1 receivedMessage:(id)arg2;
- (void)sidecarSession:(id)arg1 closedWithError:(id)arg2;
- (void)sidecarServiceTerminate;

@end
