/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <CoreData/NSManagedObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface VSDeveloperIdentityProvider : NSManagedObject

@property (copy, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) NSString *providerID;
@property (copy, nonatomic) NSString *nameForSorting;
@property (copy, nonatomic) NSString *authenticationURL;
@property (copy, nonatomic) NSString *certificateURL;
@property (copy, nonatomic) NSArray *authenticationSchemes;

@end
