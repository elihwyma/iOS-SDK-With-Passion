/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol _SBIdleTimerGlobalSettingMonitorDelegate;

@interface _SBIdleTimerGlobalSettingMonitor : NSObject

{
    NSString *_label;
    id <_SBIdleTimerGlobalSettingMonitorDelegate> _delegate;
}

@property (copy, nonatomic, readonly) NSString *label;
@property (weak, nonatomic) id <_SBIdleTimerGlobalSettingMonitorDelegate> delegate;

- (id)formattedValue;
- (_Bool)_updateCache;
- (id)initWithLabel:(id)arg1 delegate:(id)arg2;

@end
