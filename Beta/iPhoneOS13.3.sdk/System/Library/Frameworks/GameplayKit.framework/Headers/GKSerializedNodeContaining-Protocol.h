/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <GameplayKit/Swift-Protocol.h>

@class NSIndexPath;

@protocol GKSerializedNodeContaining <Swift>

@property (retain, nonatomic) NSIndexPath *serializableNodeIndexPath;
@property (retain, nonatomic) id node;

@end
