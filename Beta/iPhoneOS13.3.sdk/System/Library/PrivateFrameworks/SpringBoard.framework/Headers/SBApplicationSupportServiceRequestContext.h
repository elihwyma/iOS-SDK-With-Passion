/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class SBApplication, UISApplicationInitializationContext;

@interface SBApplicationSupportServiceRequestContext : NSObject

{
    _Bool _hostIsSpringBoard;
    SBApplication *_app;
    SBApplication *_hostApp;
    SBApplication *_extensionContainingApp;
    UISApplicationInitializationContext *_applicationInitializationContext;
}

@property (nonatomic, readonly) UISApplicationInitializationContext *applicationInitializationContext;

+ (id)hostingApplicationBundleIDForPid:(int)arg1;
+ (id)initializationContextForClient:(id)arg1;
+ (id)_hostProcessForProcess:(id)arg1;

- (id)initWithApplication:(id)arg1;
- (id)initWithClient:(id)arg1 host:(id)arg2;
- (long long)_main_effectiveClassicMode;
- (id)_main_applicationInitializationContext;
- (id)_main_displayContext;
- (id)_main_deviceContext;
- (id)_main_persistenceIDs;

@end
