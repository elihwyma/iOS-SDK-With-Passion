/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString;

@interface RWIProtocolNetworkInitiator : RWIProtocolJSONObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSArray *stackTrace;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) double lineNumber;
@property (nonatomic) int nodeId;

- (id)initWithType:(long long)arg1;

@end
