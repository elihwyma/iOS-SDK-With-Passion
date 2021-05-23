/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPAsyncOperation.h>

@class ICStoreURLRequest, NSObject;

@protocol MPStoreSocialRequestOperationDataSource, OS_dispatch_queue;

@interface MPStoreSocialRequestOperation : MPAsyncOperation

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    ICStoreURLRequest *_request;
    id <MPStoreSocialRequestOperationDataSource> _dataSource;
    CDUnknownBlockType _responseHandler;
}

@property (nonatomic, readonly) id <MPStoreSocialRequestOperationDataSource> dataSource;
@property (copy, nonatomic) CDUnknownBlockType responseHandler;

+ (id)_urlStringForKey:(id)arg1 inBag:(id)arg2;
+ (id)_stringRepresentationForHTTPBodyType:(long long)arg1;
+ (id)_stringRepresentationForHTTPMethod:(long long)arg1;

- (void)cancel;
- (void)execute;
- (id)initWithDataSource:(id)arg1;
- (id)_requestURLFromBagDictionary:(id)arg1;

@end
