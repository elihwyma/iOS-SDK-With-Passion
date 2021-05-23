/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString;

@interface RWIProtocolCSSSelector : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSArray *specificity;
@property (nonatomic) _Bool dynamic;

- (id)initWithText:(id)arg1;

@end
