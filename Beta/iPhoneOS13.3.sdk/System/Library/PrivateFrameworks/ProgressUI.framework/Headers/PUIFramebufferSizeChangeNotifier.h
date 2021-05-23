/*
 Image: /System/Library/PrivateFrameworks/ProgressUI.framework/ProgressUI
 */

#import <Foundation/NSObject.h>

@class FBSDisplayMonitor, NSMutableArray, NSString;

@interface PUIFramebufferSizeChangeNotifier : NSObject

{
    NSMutableArray *_listeners;
    FBSDisplayMonitor *_displayMonitor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)displayMonitor:(id)arg1 didUpdateIdentity:(id)arg2 withConfiguration:(id)arg3;
- (id)addListener:(CDUnknownBlockType)arg1;
- (void)removeListener:(id)arg1;
- (void)_onMainQueue_notifyListeners;

@end
