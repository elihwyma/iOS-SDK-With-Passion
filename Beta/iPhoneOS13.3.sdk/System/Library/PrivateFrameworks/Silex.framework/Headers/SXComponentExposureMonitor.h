/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString, SXViewport;

@protocol SXHost;

@interface SXComponentExposureMonitor : NSObject

{
    SXViewport *_viewport;
    id <SXHost> _host;
    NSMutableSet *_trackingComponents;
}

@property (nonatomic, readonly) SXViewport *viewport;
@property (nonatomic, readonly) id <SXHost> host;
@property (retain, nonatomic) NSMutableSet *trackingComponents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)conditionsChanged;
- (void)stopTrackingExposureOfComponentView:(id)arg1;
- (void)onExposureOf:(id)arg1 then:(CDUnknownBlockType)arg2;
- (void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(struct CGRect)arg2;
- (void)viewport:(id)arg1 documentSizeDidChangeFromSize:(struct CGSize)arg2;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)onExposureOf:(id)arg1 then:(CDUnknownBlockType)arg2 when:(CDUnknownBlockType)arg3;
- (id)initWithViewport:(id)arg1 appStateMonitor:(id)arg2 componentController:(id)arg3 host:(id)arg4;
- (void)endExposure:(id)arg1;
- (void)performMonitoring;
- (void)trackExposureForTracking:(id)arg1;
- (void)beginExposure:(id)arg1;
- (void)componentControllerDidPresent:(id)arg1;

@end
