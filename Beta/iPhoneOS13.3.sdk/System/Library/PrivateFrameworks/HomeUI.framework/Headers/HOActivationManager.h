/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface HOActivationManager : NSObject

{
    NSDate *_lastEnteredForegroundDate;
}

@property (retain, nonatomic) NSDate *lastEnteredForegroundDate;

+ (id)sharedInstance;

- (id)init;
- (void)_enteredForeground:(id)arg1;

@end
