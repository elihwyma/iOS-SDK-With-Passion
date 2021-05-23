/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString, RWIProtocolCSSSourceRange;

@interface RWIProtocolCSSSelectorList : RWIProtocolJSONObject

@property (copy, nonatomic) NSArray *selectors;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) RWIProtocolCSSSourceRange *range;

- (id)initWithSelectors:(id)arg1 text:(id)arg2;

@end
