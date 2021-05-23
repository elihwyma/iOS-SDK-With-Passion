/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@protocol CNLaunchServicesAdapter, OS_os_log;

@interface CNLaunchServices : NSObject

{
    id <CNLaunchServicesAdapter> _adapter;
    NSObject<OS_os_log> *_log;
}

@property (retain, nonatomic) id <CNLaunchServicesAdapter> adapter;
@property (retain, nonatomic) NSObject<OS_os_log> *log;

- (id)init;
- (id)applicationsForUserActivityType:(id)arg1;
- (id)applicationsAvailableForHandlingURLScheme:(id)arg1;
- (id)initWithAdapter:(id)arg1;
- (id)applicationForBundleIdentifier:(id)arg1;
- (void)openUserActivityData:(id)arg1 inApplication:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)openSensitiveURLInBackground:(id)arg1 withOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
