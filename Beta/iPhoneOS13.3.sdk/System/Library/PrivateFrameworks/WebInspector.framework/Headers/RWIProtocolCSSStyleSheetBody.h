/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString;

@interface RWIProtocolCSSStyleSheetBody : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *styleSheetId;
@property (copy, nonatomic) NSArray *rules;
@property (copy, nonatomic) NSString *text;

- (id)initWithStyleSheetId:(id)arg1 rules:(id)arg2;

@end
