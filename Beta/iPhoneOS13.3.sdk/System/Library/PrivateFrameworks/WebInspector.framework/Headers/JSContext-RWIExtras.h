/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <JavaScriptCore/JSContext.h>

@class RWIProtocolInspector;

@interface JSContext (RWIExtras)

@property (nonatomic, readonly) RWIProtocolInspector *_inspector;

@end
