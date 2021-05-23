/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolRuntimeExecutionContextDescription : RWIProtocolJSONObject

@property (nonatomic) int identifier;
@property (nonatomic) _Bool isPageContext;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *frameId;

- (id)initWithIdentifier:(int)arg1 isPageContext:(_Bool)arg2 name:(id)arg3 frameId:(id)arg4;

@end
