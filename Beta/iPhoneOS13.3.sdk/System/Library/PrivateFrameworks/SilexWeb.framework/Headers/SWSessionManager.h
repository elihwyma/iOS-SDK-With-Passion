/*
 Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SWLogger, SWScriptsManager, SWSession;

@interface SWSessionManager : NSObject

{
    id <SWSession> _session;
    id <SWScriptsManager> _scriptsManager;
    id <SWLogger> _logger;
}

@property (nonatomic, readonly) id <SWScriptsManager> scriptsManager;
@property (nonatomic, readonly) id <SWLogger> logger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <SWSession> session;

- (void)refresh;
- (id)initWithScriptsManager:(id)arg1 logger:(id)arg2;

@end
