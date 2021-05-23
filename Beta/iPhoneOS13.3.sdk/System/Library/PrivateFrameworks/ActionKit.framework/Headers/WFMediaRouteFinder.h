/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class WFDispatchSourceTimer, WFMediaRouteDescriptor, WFMediaRoutePicker;

@interface WFMediaRouteFinder : NSObject

{
    WFMediaRoutePicker *_picker;
    CDUnknownBlockType _completionHandler;
    WFMediaRouteDescriptor *_routeDescriptor;
    double _timeout;
    WFDispatchSourceTimer *_timer;
}

@property (nonatomic, readonly) CDUnknownBlockType completionHandler;
@property (nonatomic, readonly) WFMediaRouteDescriptor *routeDescriptor;
@property (nonatomic, readonly) double timeout;
@property (nonatomic, readonly) WFDispatchSourceTimer *timer;
@property (weak, nonatomic, readonly) WFMediaRoutePicker *picker;

- (void)start;
- (void)routePickerDidUpdateAvailableRoutes:(id)arg1;
- (id)initWithPicker:(id)arg1 routeDescriptor:(id)arg2 timeout:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
