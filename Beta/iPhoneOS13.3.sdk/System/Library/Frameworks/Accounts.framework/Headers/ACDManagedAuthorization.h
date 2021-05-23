/*
 Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <CoreData/NSManagedObject.h>

@class ACDManagedAccountType, NSString;

@interface ACDManagedAuthorization : NSManagedObject

@property (retain, nonatomic) id options;
@property (retain, nonatomic) NSString *grantedPermissions;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) ACDManagedAccountType *accountType;

@end
