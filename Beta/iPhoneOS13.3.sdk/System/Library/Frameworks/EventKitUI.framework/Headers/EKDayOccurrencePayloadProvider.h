/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class EKDayOccurrenceStringGenerator, NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface EKDayOccurrencePayloadProvider : NSObject

{
    long long _nextRequestId;
    NSObject<OS_dispatch_queue> *_lookupQueue;
    NSObject<OS_dispatch_queue> *_drawingQueue;
    NSMutableDictionary *_pendingRequests;
    EKDayOccurrenceStringGenerator *_stringGenerator;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *lookupQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *drawingQueue;
@property (nonatomic, readonly) NSMutableDictionary *pendingRequests;
@property (nonatomic, readonly) EKDayOccurrenceStringGenerator *stringGenerator;

+ (id)sharedProvider;
+ (id)backgroundImageCache;
+ (id)_color:(id)arg1 darkenedToPercentage:(double)arg2 withFinalAlpha:(double)arg3;

- (id)init;
- (void)cancelRequest:(long long)arg1;
- (long long)requestPayloadForState:(id)arg1 requestOptions:(unsigned long long)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)_lookupQueue_enqueueRequest:(id)arg1;
- (void)_renderRequestId:(long long)arg1;
- (void)_scheduleRequestId:(long long)arg1;
- (void)_lookupQueue_removeRequestId:(long long)arg1;
- (id)_lookupQueue_activeRequestForId:(long long)arg1;
- (id)_renderBackgroundImageWithState:(id)arg1;
- (id)_renderTextImageWithState:(id)arg1;
- (id)_renderTravelTimeImageWithState:(id)arg1;
- (id)_renderColorBlockImageWithState:(id)arg1 colorBarStyle:(long long)arg2;
- (id)_renderLightColorBlockImageWithState:(id)arg1 colorBarStyle:(long long)arg2;
- (id)_renderDarkColorBlockImageWithState:(id)arg1 colorBarStyle:(long long)arg2;
- (id)_renderLightSelectedColorBlockImageWithState:(id)arg1 colorBarStyle:(long long)arg2;
- (id)_renderLightUnselectedColorBlockImageWithState:(id)arg1 colorBarStyle:(long long)arg2;
- (id)_renderColorBlockImageWithState:(id)arg1 barColor:(id)arg2 backgroundColor:(id)arg3 stripeColor:(id)arg4 stripedImageAlpha:(double)arg5 colorBarStyle:(long long)arg6;
- (id)_renderBackgroundImageForState:(id)arg1 barColor:(id)arg2 backgroundColor:(id)arg3 colorBarStyle:(long long)arg4;

@end
