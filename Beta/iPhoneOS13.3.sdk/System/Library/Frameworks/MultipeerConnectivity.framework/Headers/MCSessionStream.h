/*
 Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

#import <Foundation/NSObject.h>

@class MCPeerID, MCResourceDownloader, MCResourceProgressObserver, NSMutableData, NSProgress, NSString, NSURL;

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface MCSessionStream : NSObject

{
    NSObject<OS_dispatch_source> *_source;
    _Bool _sourceSuspended;
    _Bool _progressUnbounded;
    unsigned int _streamID;
    int state;
    int _fd;
    MCPeerID *_peerID;
    NSString *_name;
    NSMutableData *_incomingBuffer;
    NSURL *_url;
    NSProgress *_progress;
    CDUnknownBlockType _completionHandler;
    MCResourceDownloader *_urlDownloader;
    MCResourceProgressObserver *_observer;
}

@property (nonatomic) MCPeerID *peerID;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned int streamID;
@property (nonatomic) int state;
@property (nonatomic) int fd;
@property (nonatomic) NSObject<OS_dispatch_source> *source;
@property (nonatomic) _Bool sourceSuspended;
@property (retain, nonatomic) NSMutableData *incomingBuffer;
@property (copy, nonatomic) NSURL *url;
@property (retain, nonatomic) NSProgress *progress;
@property (retain, nonatomic) MCResourceProgressObserver *observer;
@property (nonatomic) _Bool progressUnbounded;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (retain, nonatomic) MCResourceDownloader *urlDownloader;

- (void)dealloc;

@end
