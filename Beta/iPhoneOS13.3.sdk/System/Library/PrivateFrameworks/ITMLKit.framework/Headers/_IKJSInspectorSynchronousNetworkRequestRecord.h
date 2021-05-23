/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSDictionary, NSString, NSURLRequest, NSURLResponse, _IKJSInspectorNetworkLoader;

@interface _IKJSInspectorSynchronousNetworkRequestRecord : NSObject

{
    NSDate *_redirectEndTime;
    _Bool _isRedirecting;
    NSDate *_startTime;
    NSString *_identifier;
    _IKJSInspectorNetworkLoader *_loader;
    long long _resourceType;
    long long _initiatorType;
    long long _state;
    NSDictionary *_timingData;
    NSURLRequest *_URLRequest;
    NSURLResponse *_URLResponse;
    NSData *_responseBodyData;
}

@property (copy, nonatomic, readonly) NSString *identifier;
@property (weak, nonatomic) _IKJSInspectorNetworkLoader *loader;
@property (nonatomic, readonly) long long resourceType;
@property (nonatomic, readonly) long long initiatorType;
@property (nonatomic, readonly) long long state;
@property (copy, nonatomic) NSDictionary *timingData;
@property (copy, nonatomic, getter=urlRequest) NSURLRequest *URLRequest;
@property (copy, nonatomic, getter=urlResponse) NSURLResponse *URLResponse;
@property (copy, nonatomic) NSData *responseBodyData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)_protocolResourceTypeForType:(long long)arg1;
+ (long long)_responseSourceTypeForCacheType:(long long)arg1;

- (void)didReceiveData:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (id)initWithIdentifier:(id)arg1 loader:(id)arg2 resourceType:(long long)arg3 initiatorType:(long long)arg4;
- (void)_processEventType:(long long)arg1;
- (void)willSendRequest:(id)arg1 redirectResponse:(id)arg2;
- (void)_dispatchEvent:(long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)didCompleteLoadingFromCache:(long long)arg1 mimeType:(id)arg2 withResponseBody:(id)arg3;
- (void)didCompleteLoadingFromCache:(long long)arg1 withResponseBodyBlock:(CDUnknownBlockType)arg2;
- (void)_didCompleteLoadingFromCache:(long long)arg1 mimeType:(id)arg2 withResponseBody:(id)arg3 timestamp:(double)arg4;
- (void)willSendRequest:(id)arg1;
- (void)didReceiveResponse:(id)arg1 timingData:(id)arg2;
- (void)didCompleteLoadingFromMemoryWithRequest:(id)arg1 response:(id)arg2 withResponseBodyBlock:(CDUnknownBlockType)arg3;
- (void)didCompleteLoadingWithResponseBody:(id)arg1;
- (void)didCompleteLoadingFromCache:(long long)arg1 withResponseBody:(id)arg2 mimeType:(id)arg3;

@end
