/*
 Image: /System/Library/PrivateFrameworks/ControlCenterServices.framework/ControlCenterServices
 */

#import <Foundation/NSObject.h>

@class CCSRemoteServiceConnection;

@interface CCSControlCenterService : NSObject

{
    CCSRemoteServiceConnection *_connection;
}

+ (id)sharedInstance;

- (id)_init;
- (void)requestEnableModuleWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestAvailableModuleIdentifiersWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getEnabledStateOfModuleWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)presentModuleWithIdentifier:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
