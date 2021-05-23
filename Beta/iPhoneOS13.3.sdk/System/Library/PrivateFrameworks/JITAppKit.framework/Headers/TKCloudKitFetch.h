/*
 Image: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
 */

#import <NSObject.h>

@class NSError, NSMutableURLRequest, NSURL, TMLJSONObject;

@protocol TKNetworkTask;

@interface TKCloudKitFetch : NSObject

{
    id <TKNetworkTask> _queryTask;
    id <TKNetworkTask> _downloadTask;
    _Bool _active;
    _Bool _cancelled;
    NSMutableURLRequest *_urlRequest;
    NSError *_error;
    TMLJSONObject *_response;
    NSURL *_downloadURL;
}

@property (retain, nonatomic) NSURL *downloadURL;
@property (retain, nonatomic) NSMutableURLRequest *urlRequest;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) TMLJSONObject *response;
@property (nonatomic, readonly) _Bool active;
@property (nonatomic, readonly) _Bool cancelled;

- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)setResponse:(id)arg1;
- (void)send;
- (void)tmlDispose;
- (void)handleResponse:(id)arg1 data:(id)arg2 responseError:(id)arg3;
- (void)downloadAssetFromCloudKit;
- (void)handleDownloadResponse:(id)arg1 error:(id)arg2;

@end
