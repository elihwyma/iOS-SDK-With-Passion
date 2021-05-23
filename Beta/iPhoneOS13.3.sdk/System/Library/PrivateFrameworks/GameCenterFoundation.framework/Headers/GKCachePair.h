/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@interface GKCachePair : NSObject

{
    id _value;
    id _key;
}

@property (retain, nonatomic) id value;
@property (retain, nonatomic) id key;

- (void)dealloc;

@end
