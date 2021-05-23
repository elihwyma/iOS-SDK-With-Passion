/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

#import <ScreenTimeCore/Swift-Protocol.h>

@class NSData, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface STCloudActivation <Swift>

@property (nonatomic) long long activationType;
@property (retain, nonatomic) NSData *activationPlist;
@property (copy, nonatomic) NSString *ckRecordID;
@property (retain, nonatomic) NSData *ckRecordSystemFields;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSUUID *sortKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)reconcileWithManagedObjectContext:(id)arg1 andUpdateLosers:(id)arg2 error:(id *)arg3;

- (void)didChangeValueForKey:(id)arg1;
- (id)dictionaryRepresentation;
- (_Bool)updateWithDictionaryRepresentation:(id)arg1;
- (id)computeUniqueIdentifier;

@end
