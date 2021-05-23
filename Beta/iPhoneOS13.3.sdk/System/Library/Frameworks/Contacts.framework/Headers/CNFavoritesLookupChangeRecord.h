/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CNFavoritesLookupChangeRecord : NSObject

{
    int identifier;
    int uid;
    NSString *value;
    NSString *name;
    NSString *label;
    NSString *abDatabaseUUID;
}

@end
