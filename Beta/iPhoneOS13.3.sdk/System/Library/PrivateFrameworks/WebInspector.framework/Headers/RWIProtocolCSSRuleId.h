/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolCSSRuleId : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *styleSheetId;
@property (nonatomic) int ordinal;

- (id)initWithStyleSheetId:(id)arg1 ordinal:(int)arg2;

@end
