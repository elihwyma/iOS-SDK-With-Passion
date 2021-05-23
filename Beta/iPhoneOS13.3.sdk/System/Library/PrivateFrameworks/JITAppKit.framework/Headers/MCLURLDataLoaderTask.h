/*
 Image: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
 */

#import <NSObject.h>

@class NSData, NSError, NSHTTPURLResponse, NSMutableData, NSString, NSURL, NSURLRequest;

@interface MCLURLDataLoaderTask : NSObject

{
    CDUnknownBlockType _completion;
    CDUnknownBlockType _receiveDataHandler;
    NSMutableData *_responseData;
    _Bool _cancelled;
    _Bool _cachedResponse;
    _Bool _background;
    float _progress;
    NSString *_category;
    NSURLRequest *_originalRequest;
    NSURLRequest *_request;
    NSHTTPURLResponse *_response;
    NSString *_targetPath;
    id _userInfo;
    NSError *_error;
    CDUnknownBlockType _redirectHandler;
}

@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSURLRequest *originalRequest;
@property (nonatomic, readonly) NSURLRequest *request;
@property (nonatomic, readonly) NSHTTPURLResponse *response;
@property (nonatomic, readonly) NSString *targetPath;
@property (nonatomic, readonly) NSData *responseData;
@property (nonatomic, readonly) _Bool download;
@property (nonatomic, readonly) _Bool cancelled;
@property (nonatomic, readonly) _Bool responseOk;
@property (nonatomic, readonly) _Bool responseClientError;
@property (nonatomic, readonly) _Bool responseTimeout;
@property (nonatomic, readonly) _Bool cachedResponse;
@property (nonatomic, readonly) _Bool background;
@property (retain, nonatomic) id userInfo;
@property (nonatomic, readonly) float progress;
@property (nonatomic, readonly) NSError *error;
@property (copy, nonatomic) CDUnknownBlockType redirectHandler;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCategory:(id)arg1;
- (id)contentType;
- (void)setRequest:(id)arg1;
- (void)setResponseData:(id)arg1;
- (CDUnknownBlockType)completion;
- (void)setResponse:(id)arg1;
- (void)setCachedResponse:(_Bool)arg1;
- (void)setProgress:(float)arg1;
- (void)setCancelled:(_Bool)arg1;
- (CDUnknownBlockType)receiveDataHandler;
- (void)applyFileExtension:(id)arg1;
- (id)initWithURLRequest:(id)arg1 targetPath:(id)arg2 category:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 receiveData:(CDUnknownBlockType)arg5;
- (void)dispatchCompletion:(id)arg1;
- (void)applyMimeType;

@end
