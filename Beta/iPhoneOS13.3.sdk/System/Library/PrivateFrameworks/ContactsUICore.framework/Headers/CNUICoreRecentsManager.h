/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class CRRecentContactsLibrary;

@protocol CNScheduler;

@interface CNUICoreRecentsManager : NSObject

{
    CRRecentContactsLibrary *_recentsLibrary;
    id <CNScheduler> _workQueue;
}

@property (nonatomic, readonly) CRRecentContactsLibrary *recentsLibrary;
@property (nonatomic, readonly) id <CNScheduler> workQueue;

+ (id)descriptorForRequiredKeys;
+ (id)supportedPropertyDescriptions;
+ (id)allHandlesToSearchForFromContact:(id)arg1;
+ (CDUnknownBlockType)transformForPropertyDescription:(id)arg1;
+ (id)handlesForContactProperties:(id)arg1;
+ (id)queryForHandles:(id)arg1;
+ (id)predicateForSearchingHandlesForAllSupportedKinds:(id)arg1;
+ (id)supportedRecentsDomains;
+ (id)supportedRecentsKinds;

- (void)removeRecentsWithIdentifiers:(id)arg1 domain:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeRecents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)recentContactsMatchingAllPropertiesOfContact:(id)arg1;
- (id)recentContactsMatchingContactProperties:(id)arg1;
- (id)initWithRecentsLibrary:(id)arg1 schedulerProvider:(id)arg2;
- (id)recentsContactsMatchingHandles:(id)arg1;

@end
