/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class CAContext, _UIContextBinder;

@protocol _UIContextBindable <Swift>

@property (weak, nonatomic, setter=_setBoundContext:) CAContext *_boundContext;
@property (weak, nonatomic, setter=_setContextBinder:) _UIContextBinder *_contextBinder;

- (unsigned short)_bindableLevel;
- (unsigned short)_bindingLayer;
- (unsigned short)_isVisible;

@end
