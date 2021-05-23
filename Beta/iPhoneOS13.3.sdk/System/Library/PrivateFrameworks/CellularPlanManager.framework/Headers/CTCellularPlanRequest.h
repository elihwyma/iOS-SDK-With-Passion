/*
 Image: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDictionary, NSError, NSMutableData, NSMutableURLRequest, NSString, NSURLConnection, NSURLResponse;

@interface CTCellularPlanRequest : NSObject

{
    int nextConnectionTypeIndex;
    NSArray *_responseCookies;
    NSArray *_requestCookies;
    NSDictionary *_internetSettings;
    NSDictionary *_bootstrapSettings;
    NSMutableData *_receivedData;
    NSMutableURLRequest *_request;
    NSURLResponse *_response;
    NSError *_error;
    struct dispatch_queue_s *_queue;
    CDUnknownBlockType _completionBlock;
    NSURLConnection *_connection;
}

@property (nonatomic) struct dispatch_queue_s *queue;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (retain, nonatomic) NSURLConnection *connection;
@property (retain, nonatomic) NSMutableData *receivedData;
@property (retain, nonatomic) NSMutableURLRequest *request;
@property (retain, nonatomic) NSURLResponse *response;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) NSData *serializedCookies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (void)setBootstrapConnectionSettings:(id)arg1;
+ (void)setInternetConnectionSettings:(id)arg1;
+ (void)setRequestUrls:(id)arg1;
+ (id)connectionSettingsForServiceType:(long long)arg1;
+ (_Bool)isRetriableErrorCode:(long long)arg1;

- (void)dealloc;
- (void)cancel;
- (void)_callback;
- (void)startRequestWithReplyQueue:(struct dispatch_queue_s *)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_initWithUrl:(id)arg1 httpMethod:(id)arg2 httpHeaders:(id)arg3 httpBody:(id)arg4 internetSettings:(id)arg5 bootstrapSettings:(id)arg6;
- (_Bool)_isRetryableError:(id)arg1;
- (_Bool)_canTryAnotherConnectionType;
- (id)_connectionSettingsForNextConnectionType;
- (void)_startRequestWithNextConnectionTypeOrFail;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)initWithUrl:(id)arg1 httpMethod:(id)arg2 httpHeaders:(id)arg3 httpBody:(id)arg4;
- (id)initGetWithUrl:(id)arg1;
- (id)initPostWithUrl:(id)arg1;
- (id)initJsonPostWithUrl:(id)arg1 jsonData:(id)arg2;
- (id)initJsonPostWithUrl:(id)arg1 jsonData:(id)arg2 internetSettings:(id)arg3 bootstrapSettings:(id)arg4;

@end
