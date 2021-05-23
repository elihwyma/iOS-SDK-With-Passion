/*
 Image: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
 */

#import <Foundation/NSObject.h>

@class CADisplay, NSString;

@interface MXMDisplayDescriptor : NSObject

{
    CADisplay *_display;
}

@property (nonatomic, readonly) CADisplay *display;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) double refreshRate;
@property (nonatomic, readonly) _Bool main;
@property (nonatomic, readonly, getter=main) _Bool isMain;

- (id)initWithDisplay:(id)arg1;

@end
