/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolCSSMedia : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long source;
@property (copy, nonatomic) NSString *sourceURL;
@property (nonatomic) int sourceLine;

- (id)initWithText:(id)arg1 source:(long long)arg2;

@end
