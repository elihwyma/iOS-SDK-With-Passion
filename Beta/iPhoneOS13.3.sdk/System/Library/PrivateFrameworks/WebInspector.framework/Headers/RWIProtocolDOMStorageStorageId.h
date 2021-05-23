/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolDOMStorageStorageId : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *securityOrigin;
@property (nonatomic) _Bool isLocalStorage;

- (id)initWithSecurityOrigin:(id)arg1 isLocalStorage:(_Bool)arg2;

@end
