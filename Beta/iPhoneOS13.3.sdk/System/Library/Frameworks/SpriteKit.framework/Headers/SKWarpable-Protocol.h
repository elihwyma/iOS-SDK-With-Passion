/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/Swift-Protocol.h>

@class SKWarpGeometry;

@protocol SKWarpable <Swift>

@property (retain, nonatomic) SKWarpGeometry *warpGeometry;
@property (nonatomic) long long subdivisionLevels;

@end
