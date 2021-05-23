/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@interface VKMuninJunction : NSObject

{
    NSMutableArray *_roads;
}

@property (nonatomic, readonly) NSArray *roads;

- (void)dealloc;
- (id)description;
- (id)initWithMuninJunction:(const struct MuninJunction *)arg1;

@end
