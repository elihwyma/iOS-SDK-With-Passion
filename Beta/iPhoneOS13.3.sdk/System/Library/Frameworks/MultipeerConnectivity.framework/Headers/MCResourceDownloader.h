/*
 Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

#import <Foundation/NSObject.h>

#import <MultipeerConnectivity/Swift-Protocol.h>

@class MCPeerID, MCSession, NSString, NSURLSession, NSURLSessionDataTask;

__attribute__((visibility("hidden")))
@interface MCResourceDownloader : NSObject <Swift>

{
    NSURLSession *_urlSession;
    NSURLSessionDataTask *_urlTask;
    CDUnknownBlockType _urlResponseHandler;
    MCSession *_session;
    NSString *_resourceName;
    MCPeerID *_peerID;
}

@property (retain, nonatomic) NSURLSession *urlSession;
@property (retain, nonatomic) NSURLSessionDataTask *urlTask;
@property (nonatomic) CDUnknownBlockType urlResponseHandler;
@property (nonatomic) MCSession *session;
@property (copy, nonatomic) NSString *resourceName;
@property (retain, nonatomic) MCPeerID *peerID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)syncCloseStreamForSession:(id)arg1 withError:(id)arg2;
- (void)sendData:(id)arg1 fromByteOffset:(unsigned long long)arg2;
- (id)initWithSession:(id)arg1 resourceUrl:(id)arg2 name:(id)arg3 peerID:(id)arg4;

@end
