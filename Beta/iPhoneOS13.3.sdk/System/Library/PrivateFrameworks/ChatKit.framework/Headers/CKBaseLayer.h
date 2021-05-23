/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <QuartzCore/CALayer.h>

@protocol CKLayerDelegate;

@interface CKBaseLayer : CALayer

{
    id <CKLayerDelegate> _ckLayerDelegate;
}

@property (weak, nonatomic) id <CKLayerDelegate> ckLayerDelegate;

- (void)layerDidBecomeVisible:(_Bool)arg1;

@end
