/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/Swift-Protocol.h>

@class IKDOMElement, NSString;

@protocol IKJSPlayerAppBridge;

@interface IKJSLegacyPlayer : IKJSObject <Swift>

{
    id <IKJSPlayerAppBridge> _appBridge;
}

@property (weak, nonatomic) id <IKJSPlayerAppBridge> appBridge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, readonly) IKDOMElement *currentAVMediaElement;

- (id)asPrivateIKJSLegacyPlayer;

@end
