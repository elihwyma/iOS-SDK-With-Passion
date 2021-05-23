/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/Swift-Protocol.h>

@class NSDate, NSDictionary, NSString;

@protocol PGGraphIngestPerson <Swift>

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

@end
