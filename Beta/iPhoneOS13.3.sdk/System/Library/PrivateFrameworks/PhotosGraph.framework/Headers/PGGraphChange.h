/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@interface PGGraphChange : NSObject

@property (readonly) unsigned long long type;
@property (nonatomic, readonly) unsigned long long changeCount;

- (id)description;

@end
