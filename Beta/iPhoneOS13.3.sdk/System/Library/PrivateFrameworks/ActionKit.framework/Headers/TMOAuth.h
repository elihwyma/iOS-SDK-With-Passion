/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TMOAuth : NSObject

{
    NSString *_baseString;
    NSString *_headerString;
}

@property (nonatomic, readonly) NSString *baseString;
@property (nonatomic, readonly) NSString *headerString;

+ (id)headerForURL:(id)arg1 method:(id)arg2 postParameters:(id)arg3 nonce:(id)arg4 consumerKey:(id)arg5 consumerSecret:(id)arg6 token:(id)arg7 tokenSecret:(id)arg8;

- (id)initWithURL:(id)arg1 method:(id)arg2 postParameters:(id)arg3 nonce:(id)arg4 consumerKey:(id)arg5 consumerSecret:(id)arg6 token:(id)arg7 tokenSecret:(id)arg8;

@end
