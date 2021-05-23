/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFCallSiteInfo;

@interface AFClientLite : NSObject

{
    AFCallSiteInfo *_initiationCallSiteInfo;
}

- (id)init;
- (void)dealloc;
- (void)_handleCommand:(id)arg1 afterCurrentRequest:(_Bool)arg2 isOneWay:(_Bool)arg3 commandHandler:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)handleCommand:(id)arg1 afterCurrentRequest:(_Bool)arg2 commandHandler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)handleOneWayCommand:(id)arg1 commandHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleCommand:(id)arg1 commandHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;

@end
