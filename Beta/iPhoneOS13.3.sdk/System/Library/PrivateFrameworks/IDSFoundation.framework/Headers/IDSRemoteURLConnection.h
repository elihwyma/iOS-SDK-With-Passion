/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class NSString, NSURLRequest;

@protocol OS_xpc_object;

@interface IDSRemoteURLConnection : NSObject

{
    NSURLRequest *_request;
    NSString *_bundleIdentifierForDataUsage;
    CDUnknownBlockType _block;
    NSObject<OS_xpc_object> *_connection;
    _Bool _cancelled;
    _Bool _loading;
    _Bool _forceCellularIfPossible;
    int _retries;
    _Bool _requireIDSHost;
    _Bool _shouldUsePipelining;
    int _concurrentConnections;
    _Bool _disableKeepAlive;
    int _keepAliveWifi;
    int _keepAliveCell;
    _Bool _shouldReturnTimingData;
}

@property _Bool requireIDSHost;
@property _Bool forceCellularIfPossible;
@property (retain) NSString *bundleIdentifierForDataUsage;
@property _Bool shouldUsePipelining;
@property int concurrentConnections;
@property _Bool disableKeepAlive;
@property int keepAliveWifi;
@property int keepAliveCell;
@property _Bool shouldReturnTimingData;
@property (retain) NSURLRequest *request;
@property (copy) CDUnknownBlockType block;

- (void)dealloc;
- (void)load;
- (void)cancel;
- (void)_disconnected;
- (_Bool)_disconnect;
- (_Bool)_connect;
- (id)initWithURLRequest:(id)arg1 completionBlockWithTimingData:(CDUnknownBlockType)arg2;
- (id)initWithURLRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
