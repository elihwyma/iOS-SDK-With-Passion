/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNUIContactsEnvironmentServicesProvider : NSObject

+ (id)capabilities;
+ (id)suggestionsService;
+ (id)applicationWorkspace;
+ (id)defaultUserActionFetcher;
+ (id)recentsManagerWithSchedulerProvider:(id)arg1;
+ (id)idsIDQueryControllerWrapper;

@end
