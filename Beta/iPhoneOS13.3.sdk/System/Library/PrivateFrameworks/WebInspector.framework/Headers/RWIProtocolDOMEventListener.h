/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolDebuggerLocation;

@interface RWIProtocolDOMEventListener : RWIProtocolJSONObject

@property (nonatomic) int eventListenerId;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) _Bool useCapture;
@property (nonatomic) _Bool isAttribute;
@property (nonatomic) int nodeId;
@property (nonatomic) _Bool onWindow;
@property (retain, nonatomic) RWIProtocolDebuggerLocation *location;
@property (copy, nonatomic) NSString *handlerName;
@property (nonatomic) _Bool passive;
@property (nonatomic) _Bool once;
@property (nonatomic) _Bool disabled;
@property (nonatomic) _Bool hasBreakpoint;

- (id)initWithEventListenerId:(int)arg1 type:(id)arg2 useCapture:(_Bool)arg3 isAttribute:(_Bool)arg4;

@end
