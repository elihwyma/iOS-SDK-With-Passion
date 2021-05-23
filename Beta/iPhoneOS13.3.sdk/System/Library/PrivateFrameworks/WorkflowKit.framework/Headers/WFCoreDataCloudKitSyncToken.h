/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSString;

@interface WFCoreDataCloudKitSyncToken : NSManagedObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *account;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSData *lastOrderingData;
@property (retain, nonatomic) NSData *serverChangeTokenData;

+ (id)fetchRequest;

- (id)descriptor;

@end
