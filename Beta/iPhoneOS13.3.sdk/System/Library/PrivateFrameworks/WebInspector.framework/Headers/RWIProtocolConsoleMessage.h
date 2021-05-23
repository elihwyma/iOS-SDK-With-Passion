/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString;

@interface RWIProtocolConsoleMessage : RWIProtocolJSONObject

@property (nonatomic) long long source;
@property (nonatomic) long long level;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) int line;
@property (nonatomic) int column;
@property (nonatomic) int repeatCount;
@property (copy, nonatomic) NSArray *parameters;
@property (copy, nonatomic) NSArray *stackTrace;
@property (copy, nonatomic) NSString *networkRequestId;

- (id)initWithSource:(long long)arg1 level:(long long)arg2 text:(id)arg3;

@end
