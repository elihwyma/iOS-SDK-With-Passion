/*
 Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

#import <LSApplicationWorkspaceObserver.h>

@class NSObject;

@protocol ATWorkspaceObserverDelegate, LSApplicationWorkspaceObserverProtocol;

@interface ATWorkspaceObserver : LSApplicationWorkspaceObserver

{
    NSObject<LSApplicationWorkspaceObserverProtocol> *_delegate;
}

@property (nonatomic) NSObject<ATWorkspaceObserverDelegate> *delegate;

- (void)applicationInstallsDidCancel:(id)arg1;
- (void)applicationInstallsDidPrioritize:(id)arg1;
- (void)applicationInstallsDidChange:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2;
- (void)startObserving;
- (void)stopObserving;

@end
