/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class NSString;

@protocol CNSchedulerProvider;

@interface CNLSApplicationWorkspace : NSObject

{
    id <CNSchedulerProvider> _schedulerProvider;
}

@property (retain, nonatomic) id <CNSchedulerProvider> schedulerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)inProcessLaunchServices;
+ (id)remoteAdapter;
+ (id)launchServices;

- (id)init;
- (id)applicationsForUserActivityType:(id)arg1;
- (id)applicationsAvailableForHandlingURLScheme:(id)arg1;
- (id)initWithSchedulerProvider:(id)arg1;
- (id)applicationForBundleIdentifier:(id)arg1;
- (void)openSensitiveURLInBackground:(id)arg1 withOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)openSensitiveURLInBackground:(id)arg1 withOptions:(id)arg2;
- (void)openUserActivity:(id)arg1 inApplication:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)observableForApplicationsChangedWithSchedulerProvider:(id)arg1;

@end
