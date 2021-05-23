/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@interface RWIProtocolConsoleChannel : RWIProtocolJSONObject

@property (nonatomic) long long source;
@property (nonatomic) long long level;

- (id)initWithSource:(long long)arg1 level:(long long)arg2;

@end
