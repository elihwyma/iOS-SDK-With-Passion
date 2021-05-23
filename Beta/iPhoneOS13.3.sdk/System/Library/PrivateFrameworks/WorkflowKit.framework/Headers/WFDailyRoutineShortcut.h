/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSString, WFDailyRoutineShortcutSetupFlow, WFImage;

@interface WFDailyRoutineShortcut : NSObject

{
    NSString *_title;
    NSString *_subtitle;
    WFImage *_bannerImage;
    WFDailyRoutineShortcutSetupFlow *_setupFlow;
}

@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *subtitle;
@property (copy, nonatomic, readonly) WFImage *bannerImage;
@property (nonatomic, readonly) WFDailyRoutineShortcutSetupFlow *setupFlow;

- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 bannerImage:(id)arg3 setupFlow:(id)arg4;

@end
