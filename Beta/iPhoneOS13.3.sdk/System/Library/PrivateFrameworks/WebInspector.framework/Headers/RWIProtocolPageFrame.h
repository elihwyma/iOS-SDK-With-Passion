/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolPageFrame : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *loaderId;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *securityOrigin;
@property (copy, nonatomic) NSString *mimeType;
@property (copy, nonatomic) NSString *parentId;
@property (copy, nonatomic) NSString *name;

- (id)initWithIdentifier:(id)arg1 loaderId:(id)arg2 url:(id)arg3 securityOrigin:(id)arg4 mimeType:(id)arg5;

@end
