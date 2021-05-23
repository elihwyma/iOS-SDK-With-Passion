/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKViewElement.h>

@class IKAppPlayerBridge;

@interface IKMediaContentElement : IKViewElement

{
    IKAppPlayerBridge *_playerBridge;
}

@property (nonatomic, readonly) IKAppPlayerBridge *playerBridge;

+ (id)supportedFeatures;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end
