/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolCSSSourceRange;

@interface RWIProtocolCSSProperty : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *priority;
@property (nonatomic) _Bool implicit;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) _Bool parsedOk;
@property (nonatomic) long long status;
@property (retain, nonatomic) RWIProtocolCSSSourceRange *range;

- (id)initWithName:(id)arg1 value:(id)arg2;

@end
