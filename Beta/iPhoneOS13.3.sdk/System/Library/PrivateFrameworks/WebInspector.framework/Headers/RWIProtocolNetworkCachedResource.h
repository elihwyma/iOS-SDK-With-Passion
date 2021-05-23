/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolNetworkResponse;

@interface RWIProtocolNetworkCachedResource : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *url;
@property (nonatomic) long long type;
@property (nonatomic) double bodySize;
@property (retain, nonatomic) RWIProtocolNetworkResponse *response;
@property (copy, nonatomic) NSString *sourceMapURL;

- (id)initWithUrl:(id)arg1 type:(long long)arg2 bodySize:(double)arg3;

@end
