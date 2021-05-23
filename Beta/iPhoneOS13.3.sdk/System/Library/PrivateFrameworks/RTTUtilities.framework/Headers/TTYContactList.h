/*
 Image: /System/Library/PrivateFrameworks/RTTUtilities.framework/RTTUtilities
 */

#import <CoreData/NSManagedObject.h>

@class NSString;

@interface TTYContactList : NSManagedObject

@property (retain, nonatomic) NSString *callUID;
@property (retain, nonatomic) NSString *contactID;

@end
