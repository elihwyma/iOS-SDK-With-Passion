/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface PGTitleSpecPool : NSObject

{
    NSArray *_specs;
}

@property (readonly) NSArray *specs;

+ (id)poolWithSpecs:(id)arg1;

- (id)description;
- (id)initWithSpecs:(id)arg1;

@end
