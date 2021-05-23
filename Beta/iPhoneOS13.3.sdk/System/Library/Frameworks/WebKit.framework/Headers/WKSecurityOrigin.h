/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WKSecurityOrigin : NSObject

{
    struct ObjectStorage<API::SecurityOrigin> _securityOrigin;
}

@property (copy, nonatomic, readonly) NSString *protocol;
@property (copy, nonatomic, readonly) NSString *host;
@property (nonatomic, readonly) long long port;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

- (void)dealloc;

@end
