/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@protocol MSStreamsProtocolDelegate;

@interface MSStreamsProtocol : NSObject

{
    id <MSStreamsProtocolDelegate> _delegate;
    NSString *_personID;
}

@property (nonatomic) id <MSStreamsProtocolDelegate> delegate;
@property (nonatomic, readonly) NSString *personID;
@property (weak, nonatomic, readonly) NSURL *putURL;
@property (weak, nonatomic, readonly) NSURL *getURL;
@property (weak, nonatomic, readonly) NSURL *resetURL;
@property (weak, nonatomic, readonly) NSURL *reauthorizeURL;
@property (weak, nonatomic, readonly) NSURL *uploadCompleteURL;
@property (weak, nonatomic, readonly) NSURL *deleteURL;

- (void)abort;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;
- (id)deviceInfoDict;
- (void)_didFindServerSideConfigurationVersion:(id)arg1;
- (void)_didReceiveRetryAfterDate:(id)arg1;
- (void)_refreshAuthTokenForContext:(struct __MSSPCContext *)arg1;

@end
