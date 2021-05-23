/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <NSObject.h>

@interface ADClient : NSObject

+ (id)sharedClient;

- (void)addClientToSegments:(id)arg1 replaceExisting:(_Bool)arg2;
- (void)segmentDataForSignedInUserWithBlock:(CDUnknownBlockType)arg1;
- (void)prepareForAdRequests;
- (void)requestAttributionDetailsWithBlock:(CDUnknownBlockType)arg1;
- (void)determineAppInstallationAttributionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)lookupAdConversionDetails:(CDUnknownBlockType)arg1;

@end
