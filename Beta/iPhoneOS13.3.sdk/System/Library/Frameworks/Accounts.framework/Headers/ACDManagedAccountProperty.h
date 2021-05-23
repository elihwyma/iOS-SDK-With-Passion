/*
 Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <CoreData/NSManagedObject.h>

@class ACDManagedAccount, NSString;

@interface ACDManagedAccountProperty : NSManagedObject

@property (retain, nonatomic) id value;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) ACDManagedAccount *owner;

@end
