/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString, RWIProtocolDebuggerLocation;

@interface RWIProtocolDebuggerFunctionDetails : RWIProtocolJSONObject

@property (retain, nonatomic) RWIProtocolDebuggerLocation *location;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSArray *scopeChain;

- (id)initWithLocation:(id)arg1;

@end
