/*
 Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <NSObject.h>

@class NSString, NSTimer;

@interface TPStatusBarManager : NSObject

{
    NSString *_currentAbbreviatedStatusBarString;
    NSTimer *_callDurationTimer;
}

@property (retain, nonatomic) NSTimer *callDurationTimer;
@property (copy, nonatomic) NSString *currentAbbreviatedStatusBarString;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)updateCurrentAbbreviatedStatusBarStringAndSendNotification;
- (void)updateCurrentAbbreviatedStatusBarString;

@end
