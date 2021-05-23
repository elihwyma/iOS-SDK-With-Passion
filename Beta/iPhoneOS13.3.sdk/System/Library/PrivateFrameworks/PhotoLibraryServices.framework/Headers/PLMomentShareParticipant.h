/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSPersonNameComponents, NSString, PLMomentShare;

@interface PLMomentShareParticipant : PLManagedObject

@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSPersonNameComponents *nameComponents;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *userIdentifier;
@property (nonatomic) short type;
@property (nonatomic) short status;
@property (retain, nonatomic) PLMomentShare *momentShare;

+ (id)entityName;
+ (id)insertInPhotoLibrary:(id)arg1;
+ (id)updateOrInsertWithCPLMomentShareParticipant:(id)arg1 inMomentShare:(id)arg2;
+ (id)participantsWithUUIDs:(id)arg1 inPhotoLibrary:(id)arg2;
+ (id)_momentShareParticipantsWithPredicate:(id)arg1 fetchLimit:(unsigned long long)arg2 inManagedObjectContext:(id)arg3;

- (id)description;
- (id)_typeDescription;
- (id)_statusDescription;

@end
