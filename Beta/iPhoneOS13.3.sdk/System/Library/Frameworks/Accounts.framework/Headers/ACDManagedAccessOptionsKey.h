/*
 Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString;

@interface ACDManagedAccessOptionsKey : NSManagedObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSSet *owningAccountTypes;

@end
