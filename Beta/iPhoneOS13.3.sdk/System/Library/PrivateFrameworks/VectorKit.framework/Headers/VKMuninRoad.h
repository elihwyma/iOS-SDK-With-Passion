/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface VKMuninRoad : NSObject

{
    NSString *_roadName;
}

@property (nonatomic, readonly) NSString *roadName;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithMuninRoadEdge:(const struct MuninRoadEdge *)arg1;

@end
