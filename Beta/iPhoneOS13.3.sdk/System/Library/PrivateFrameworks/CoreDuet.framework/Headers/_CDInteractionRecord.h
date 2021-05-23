/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString, _CDContactRecord;

@interface _CDInteractionRecord : NSManagedObject

@property (retain, nonatomic) NSString *bundleId;
@property (retain, nonatomic) NSString *targetBundleId;
@property (retain, nonatomic) NSString *groupName;
@property (retain, nonatomic) NSString *derivedIntentIdentifier;
@property (retain, nonatomic) NSString *domainIdentifier;
@property (retain, nonatomic) NSString *contentURL;
@property (nonatomic) double creationDate;
@property (nonatomic) long long direction;
@property (nonatomic) double endDate;
@property (nonatomic) _Bool isResponse;
@property (retain, nonatomic) NSString *locationUUID;
@property (nonatomic) long long mechanism;
@property (nonatomic) long long recipientCount;
@property (nonatomic) double startDate;
@property (retain, nonatomic) NSString *account;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSSet *keywords;
@property (retain, nonatomic) NSSet *attachments;
@property (retain, nonatomic) NSSet *recipients;
@property (retain, nonatomic) _CDContactRecord *sender;

@end
