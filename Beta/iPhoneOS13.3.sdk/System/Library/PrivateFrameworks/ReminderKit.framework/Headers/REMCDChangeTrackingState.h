/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSString;

@interface REMCDChangeTrackingState : NSManagedObject

@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *clientName;
@property (retain, nonatomic) NSData *lastConsumedChangeTokenData;
@property (copy, nonatomic) NSDate *lastConsumedDate;

+ (id)fetchRequest;

@end
