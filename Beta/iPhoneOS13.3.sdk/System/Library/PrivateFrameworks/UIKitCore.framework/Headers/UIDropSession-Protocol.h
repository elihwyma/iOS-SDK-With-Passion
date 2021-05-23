/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@protocol UIDragSession;

@protocol UIDropSession <Swift>

@property (nonatomic, readonly) id <UIDragSession> localDragSession;
@property (nonatomic) unsigned long long progressIndicatorStyle;

- (unsigned short)loadObjectsOfClass:completion: /* Error: Ran out of types for this method. */;

@end
