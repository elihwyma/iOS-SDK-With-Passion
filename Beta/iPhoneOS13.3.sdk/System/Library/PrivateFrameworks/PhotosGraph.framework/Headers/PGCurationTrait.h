/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PGCurationTrait : NSObject

{
    double _minimumScore;
}

@property (nonatomic) double minimumScore;
@property (nonatomic, readonly) _Bool isMatchingRequired;
@property (nonatomic, readonly) _Bool isActive;
@property (readonly) NSString *niceDescription;

- (id)init;
- (id)debugDescription;

@end
