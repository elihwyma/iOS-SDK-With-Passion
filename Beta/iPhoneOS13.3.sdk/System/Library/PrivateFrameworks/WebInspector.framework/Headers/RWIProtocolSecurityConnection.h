/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolSecurityConnection : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *protocol;
@property (copy, nonatomic) NSString *cipher;

@end
