/*
 Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

#import <Foundation/NSObject.h>

@class NSString, NSURLRequest;

@interface SWMessageSecurityOrigin : NSObject

{
    NSString *_protocol;
    NSString *_host;
    NSURLRequest *_request;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *protocol;
@property (nonatomic, readonly) NSString *host;
@property (nonatomic, readonly) NSURLRequest *request;

- (id)initWithProtocol:(id)arg1 host:(id)arg2 request:(id)arg3;

@end
