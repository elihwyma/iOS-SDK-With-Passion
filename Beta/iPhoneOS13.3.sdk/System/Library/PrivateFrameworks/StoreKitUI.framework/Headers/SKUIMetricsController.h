/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString, SKUIMetricsImpressionSession, SSMetricsConfiguration, SSMetricsController;

@protocol OS_dispatch_source;

@interface SKUIMetricsController : NSObject

{
    SKUIMetricsImpressionSession *_activeImpressionsSession;
    NSString *_applicationIdentifier;
    SSMetricsController *_controller;
    _Bool _flushesImmediately;
    SSMetricsConfiguration *_globalConfiguration;
    NSString *_hostApplicationIdentifier;
    _Bool _impressionsEnabled;
    NSObject<OS_dispatch_source> *_impressionsTimer;
    _Bool _loggingEnabled;
    SSMetricsConfiguration *_pageConfiguration;
    NSString *_pageContext;
    NSString *_pageURL;
    NSString *_topic;
    NSString *_userAgent;
    NSString *_windowOrientation;
}

@property (nonatomic, readonly) SKUIMetricsImpressionSession *activeImpressionsSession;
@property (nonatomic, readonly) double flushInterval;
@property (nonatomic, readonly) SSMetricsConfiguration *globalConfiguration;
@property (retain, nonatomic) SSMetricsConfiguration *pageConfiguration;
@property (nonatomic, readonly) NSNumber *accountIdentifier;
@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSString *hostApplicationIdentifier;
@property (copy, nonatomic) NSString *pageContext;
@property (copy, nonatomic) NSString *pageURL;
@property (copy, nonatomic) NSString *topic;
@property (copy, nonatomic) NSString *userAgent;
@property (copy, nonatomic) NSString *windowOrientation;

+ (void)flushImmediately;

- (void)dealloc;
- (void)recordEvent:(id)arg1;
- (id)compoundStringWithElements:(id)arg1;
- (id)tokenStringWithElements:(id)arg1;
- (id)initWithGlobalConfiguration:(id)arg1;
- (id)locationWithPosition:(long long)arg1 type:(id)arg2 fieldData:(id)arg3;
- (id)performActionForItem:(id)arg1 offer:(id)arg2 clientContext:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)performActionForSoftwareItem:(id)arg1 offer:(id)arg2 clientContext:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)performActionForItem:(id)arg1 clientContext:(id)arg2;
- (void)pingURLs:(id)arg1 withClientContext:(id)arg2;
- (id)itemOfferClickEventWithItem:(id)arg1 locationPosition:(long long)arg2;
- (id)locationWithPageComponent:(id)arg1;
- (_Bool)canRecordEventWithType:(id)arg1;
- (void)flushImmediately;
- (void)closeImpressionsSession;
- (void)_recordActiveImpressions;
- (void)_insertEvent:(id)arg1;
- (id)clickEventWithItem:(id)arg1 locationPosition:(long long)arg2;
- (id)performActionForItem:(id)arg1;
- (id)performActionForItem:(id)arg1 offer:(id)arg2 clientContext:(id)arg3;
- (void)pingURLs:(id)arg1;
- (void)recordBuyConfirmedEventsForItems:(id)arg1 purchaseResponses:(id)arg2;
- (void)_waitUntilRecordingComplete;

@end
