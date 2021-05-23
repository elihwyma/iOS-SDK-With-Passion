/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class CNContactStore;

@protocol NSObject;

@interface CNDowntimeWhitelist : NSObject

{
    CNContactStore *_store;
    id <NSObject> _contactStoreDidChangeNotificationToken;
}

@property (readonly) CNContactStore *store;
@property (readonly) id <NSObject> contactStoreDidChangeNotificationToken;

+ (id)os_log;
+ (_Bool)isWhitelistedContact:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)keys;
- (id)initWithContactStore:(id)arg1;
- (_Bool)anyContactIsWhitelisted:(id)arg1;
- (id)allWhitelistedContacts;
- (id)whitelistedHandleStringsFromHandleStrings:(id)arg1;
- (_Bool)isHandleStringWhitelisted:(id)arg1;
- (id)allWhitelistedHandleStrings;

@end
