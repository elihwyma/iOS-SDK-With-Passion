/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

#import <CoreData/NSManagedObject.h>

@class NSArray, NSData, NSString, STCoreOrganization;

@interface STCoreTransportPayload : NSManagedObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) STCoreOrganization *sourceOrganizationEnqueued;
@property (retain, nonatomic) STCoreOrganization *sourceOrganizationPending;
@property (retain, nonatomic) STCoreOrganization *sourceOrganizationRecent;
@property (copy, nonatomic) NSArray *destinations;
@property (copy, nonatomic) NSData *payloadData;

+ (id)fetchRequestForPayloadsOfType:(id)arg1;
+ (id)fetchLastTransportPayloadInContext:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
+ (id)fetchTransportPayloadContext:(id)arg1 withIdentifier:(id)arg2 error:(id *)arg3;

- (id)description;

@end
