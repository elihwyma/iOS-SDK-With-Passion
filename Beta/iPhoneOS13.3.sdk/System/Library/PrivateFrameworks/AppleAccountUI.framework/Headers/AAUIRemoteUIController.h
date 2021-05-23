/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <RemoteUI/RemoteUIController.h>

@class NSHTTPURLResponse, NSString, NSURLRequest;

@interface AAUIRemoteUIController : RemoteUIController

{
    NSString *_identifier;
    NSURLRequest *_currentRequest;
    NSHTTPURLResponse *_redirectResponse;
}

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic, readonly) NSURLRequest *currentRequest;
@property (retain, nonatomic) NSHTTPURLResponse *redirectResponse;

- (id)init;
- (id)description;
- (id)initWithIdentifier:(id)arg1;
- (void)loader:(id)arg1 willLoadRequest:(id)arg2 redirectResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)loader:(id)arg1 willLoadRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)loader:(id)arg1 didFinishLoadWithError:(id)arg2;
- (void)loader:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)loader:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)loader:(id)arg1 connection:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4;
- (void)_loader:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
