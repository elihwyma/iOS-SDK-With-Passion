/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolNetworkHeaders;

@interface RWIProtocolNetworkRequest : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *method;
@property (retain, nonatomic) RWIProtocolNetworkHeaders *headers;
@property (copy, nonatomic) NSString *postData;

- (id)initWithUrl:(id)arg1 method:(id)arg2 headers:(id)arg3;

@end
