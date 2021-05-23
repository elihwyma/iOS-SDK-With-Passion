/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGGraphNode.h>

@class NSDate, NSString;

@interface PGGraphContactNode : PGGraphNode

{
    NSString *_contactIdentifier;
}

@property (nonatomic, readonly) NSString *contactIdentifier;
@property (readonly) NSDate *birthdayDate;
@property (readonly) NSDate *potentialBirthdayDate;

- (unsigned long long)genderHintForGivenName;

@end
