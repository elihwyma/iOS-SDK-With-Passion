/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/Swift-Protocol.h>

@class NSDate, NSString;

@protocol PGPersonResult <Swift>

@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *localIdentifier;
@property (nonatomic, readonly) NSString *contactIdentifier;
@property (nonatomic, readonly) NSString *suggestedContactIdentifier;
@property (nonatomic, readonly) _Bool isVerified;
@property (nonatomic, readonly) _Bool isInferredChild;
@property (nonatomic, readonly) NSDate *birthdayDate;
@property (nonatomic, readonly) NSString *keywordDescription;

+ (unsigned short)type;

- (unsigned short)compareToPerson: /* Error: Ran out of types for this method. */;

@end
