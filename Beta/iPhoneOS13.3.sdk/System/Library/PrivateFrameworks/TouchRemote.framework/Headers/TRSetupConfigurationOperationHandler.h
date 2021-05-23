/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TRSetupConfigurationOperationHandler : NSObject

{
    CDUnknownBlockType _configurationHandler;
}

@property (copy, nonatomic) CDUnknownBlockType configurationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)registerMessageHandlersForSession:(id)arg1;
- (void)_handleConfigurationRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (id)initWithConfigurationHandler:(CDUnknownBlockType)arg1;

@end
