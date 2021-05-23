/*
 Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SWDatastoreFactory, SWDatastoreManager, SWLogger, SWScriptsManager, SWSessionManager;

@interface SWDatastoreSynchronizationManager : NSObject

{
    id <SWDatastoreManager> _datastoreManager;
    id <SWDatastoreFactory> _settingsFactory;
    id <SWScriptsManager> _scriptsManager;
    id <SWSessionManager> _sessionManager;
    id <SWLogger> _logger;
}

@property (nonatomic, readonly) id <SWDatastoreManager> datastoreManager;
@property (nonatomic, readonly) id <SWDatastoreFactory> settingsFactory;
@property (nonatomic, readonly) id <SWScriptsManager> scriptsManager;
@property (nonatomic, readonly) id <SWSessionManager> sessionManager;
@property (nonatomic, readonly) id <SWLogger> logger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2;
- (id)initWithDatastoreManager:(id)arg1 settingsFactory:(id)arg2 scriptsManager:(id)arg3 messageHandlerManager:(id)arg4 sessionManager:(id)arg5 logger:(id)arg6;
- (void)datastoreManager:(id)arg1 didChangeFromDatastore:(id)arg2 originatingSession:(id)arg3;

@end
