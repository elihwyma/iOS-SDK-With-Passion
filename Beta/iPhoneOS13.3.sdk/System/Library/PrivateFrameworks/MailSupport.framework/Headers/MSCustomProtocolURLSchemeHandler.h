/*
 Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MSCustomProtocolURLSchemeHandler : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedHandler;

- (void)webView:(id)arg1 startURLSchemeTask:(id)arg2;
- (void)webView:(id)arg1 stopURLSchemeTask:(id)arg2;

@end
