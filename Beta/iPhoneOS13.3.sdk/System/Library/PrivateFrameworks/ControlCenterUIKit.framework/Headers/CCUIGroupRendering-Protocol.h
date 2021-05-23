/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

#import <ControlCenterUIKit/Swift-Protocol.h>

@class CALayer, NSArray;

@protocol CCUIGroupRendering <Swift>

@property (nonatomic, readonly, getter=isGroupRenderingRequired) _Bool groupRenderingRequired;
@property (nonatomic, readonly) NSArray *punchOutRootLayers;
@property (nonatomic, readonly) CALayer *punchOutRootLayer;

@end
