/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSURL;

@interface WFDropboxAppAuthorizationSession : NSObject

{
    NSArray *_authorizationURLs;
    NSURL *_successURI;
    NSURL *_cancelURI;
    NSString *_clientID;
    NSString *_state;
    CDUnknownBlockType _completionHandler;
}

@property (nonatomic, readonly) NSString *clientID;
@property (nonatomic, readonly) NSString *state;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (nonatomic, readonly) NSArray *authorizationURLs;
@property (nonatomic, readonly) NSURL *successURI;
@property (nonatomic, readonly) NSURL *cancelURI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)resumeSessionWithURL:(id)arg1;
- (id)initWithClientID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
