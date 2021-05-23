/*
 Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

#import <Foundation/NSObject.h>

@class NSString, PKDiscoveryDriver;

@interface PKDiscoveryLSWatcher : NSObject

{
    PKDiscoveryDriver *_wdriver;
}

@property (weak) PKDiscoveryDriver *wdriver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)pluginsDidInstall:(id)arg1;
- (void)pluginsDidUninstall:(id)arg1;
- (void)update;
- (id)initWithDriver:(id)arg1;
- (void)stopUpdates;

@end
