/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolDOMRGBAColor;

@interface RWIProtocolDOMHighlightConfig : RWIProtocolJSONObject

@property (nonatomic) _Bool showInfo;
@property (retain, nonatomic) RWIProtocolDOMRGBAColor *contentColor;
@property (retain, nonatomic) RWIProtocolDOMRGBAColor *paddingColor;
@property (retain, nonatomic) RWIProtocolDOMRGBAColor *borderColor;
@property (retain, nonatomic) RWIProtocolDOMRGBAColor *marginColor;

@end
