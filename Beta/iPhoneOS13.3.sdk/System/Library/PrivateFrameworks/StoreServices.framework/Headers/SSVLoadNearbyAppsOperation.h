/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <ProtocolBuffer/NSOperation.h>

@class CLLocation, NSMutableDictionary, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface SSVLoadNearbyAppsOperation : NSOperation

{
    NSString *_baseURLString;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CLLocation *_location;
    NSMutableDictionary *_parameters;
    CDUnknownBlockType _responseBlock;
    NSString *_storeFrontSuffix;
    NSString *_userAgent;
}

@property (readonly) CLLocation *location;
@property (copy) NSString *pointOfInterestIdentifier;
@property (copy) NSString *pointOfInterestProviderIdentifier;
@property (copy) NSString *pointOfInterestProviderURL;
@property (copy) CDUnknownBlockType responseBlock;
@property (copy) NSString *storeFrontSuffix;
@property (copy) NSString *userAgent;

- (void)main;
- (id)_storeFrontSuffix;
- (id)_lookupWithRequest:(id)arg1 error:(id *)arg2;
- (id)initWithBaseURL:(id)arg1 location:(id)arg2;

@end
