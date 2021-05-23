/*
 Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, NSString;

@interface ACDManagedCredentialItem : NSManagedObject

@property (retain, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSNumber *persistent;

@end
