/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@protocol UIDragSession;

@protocol UIDropSession <Swift>

@property (nonatomic, readonly) id <UIDragSession> localDragSession;
@property (nonatomic) unsigned long long progressIndicatorStyle;

- (unsigned short)loadObjectsOfClass:completion: /* Error: Ran out of types for this method. */;

@end
