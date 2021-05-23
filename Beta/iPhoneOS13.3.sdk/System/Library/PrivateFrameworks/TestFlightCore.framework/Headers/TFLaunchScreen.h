/*
 Image: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, TFAppLockup;

__attribute__((visibility("hidden")))
@interface TFLaunchScreen : NSObject

{
    TFAppLockup *_lockup;
    NSString *_testerNotes;
    NSURL *_howToScreenshotSupportUrl;
}

@property (nonatomic, readonly) TFAppLockup *lockup;
@property (copy, nonatomic, readonly) NSString *testerNotes;
@property (nonatomic, readonly) NSURL *howToScreenshotSupportUrl;

- (id)initWithLockup:(id)arg1 testerNotes:(id)arg2 howToScreenshotSupportUrl:(id)arg3;

@end
