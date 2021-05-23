/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <MediaMiningKit/CLSPerson.h>

@class NSDate, NSDictionary, NSString;

@interface CLSPerson (PGPersonResult)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *localIdentifier;
@property (nonatomic, readonly) NSString *contactIdentifier;
@property (nonatomic, readonly) NSString *suggestedContactIdentifier;
@property (nonatomic, readonly) _Bool isVerified;
@property (nonatomic, readonly) _Bool isInferredChild;
@property (nonatomic, readonly) NSDate *birthdayDate;
@property (nonatomic, readonly) NSString *keywordDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *fullName;
@property (nonatomic, readonly) NSString *UUID;
@property (nonatomic, readonly) NSString *contactID;
@property (nonatomic, readonly) _Bool isFavorite;
@property (nonatomic, readonly) _Bool isUserCreated;
@property (nonatomic, readonly) _Bool isMe;
@property (nonatomic, readonly) NSDate *birthdayDate;
@property (nonatomic, readonly) NSDate *potentialBirthdayDate;
@property (nonatomic, readonly) NSDate *anniversaryDate;
@property (nonatomic, readonly) unsigned long long relationship;
@property (nonatomic, readonly) unsigned long long ageCategory;
@property (nonatomic, readonly) unsigned long long gender;
@property (nonatomic, readonly) NSDictionary *locationsByAddressTypes;

+ (unsigned long long)type;

- (long long)compareToPerson:(id)arg1;

@end
