/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Photos/PHPerson.h>

@class NSDate, NSString;

@interface PHPerson (PGPersonResult)

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

+ (unsigned long long)type;

- (long long)compareToPerson:(id)arg1;

@end
