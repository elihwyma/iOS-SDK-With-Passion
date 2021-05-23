/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/Swift-Protocol.h>

@class PHPerson;

@protocol PGQuestion <Swift>

@property (nonatomic, readonly) PHPerson *person;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) double score;

+ (unsigned short)questionForPerson: /* Error: Ran out of types for this method. */;

- (unsigned short)remove;
- (unsigned short)persist;
- (unsigned short)isEqualToQuestion: /* Error: Ran out of types for this method. */;

@end
