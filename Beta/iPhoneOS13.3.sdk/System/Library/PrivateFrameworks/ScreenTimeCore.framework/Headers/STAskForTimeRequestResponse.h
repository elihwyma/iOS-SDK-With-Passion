/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, NSString, NSUUID, STCoreUser, STFamilyOrganization;

@interface STAskForTimeRequestResponse : NSManagedObject

@property (retain, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) NSNumber *timeRequested;
@property (nonatomic) long long usageType;
@property (retain, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSString *requestedApplicationBundleIdentifier;
@property (copy, nonatomic) NSString *requestedCategoryIdentifier;
@property (copy, nonatomic) NSString *requestedWebDomain;
@property (retain, nonatomic) STCoreUser *requestingUser;
@property (retain, nonatomic) NSDate *requestTimeStamp;
@property (retain, nonatomic) NSNumber *amountGranted;
@property (retain, nonatomic) NSNumber *answer;
@property (retain, nonatomic) NSDate *responseTimeStamp;
@property (retain, nonatomic) STCoreUser *respondingUser;
@property (retain, nonatomic) STFamilyOrganization *familyOrganization;

+ (id)_fetchPredicateForAskForTimeRequest:(id)arg1 requestingUserDSID:(id)arg2;
+ (id)upsertAskForTimeRequest:(id)arg1 fromUser:(id)arg2 inContext:(id)arg3 error:(id *)arg4;

- (void)awakeFromInsert;

@end
