/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <Foundation/NSObject.h>

@class NSUserDefaults;

@interface SBUIExternalPreferences : NSObject

{
    NSUserDefaults *_soundDefaults;
    _Bool _keyboardPlaysSounds;
}

@property (nonatomic) _Bool keyboardPlaysSounds;

+ (id)sharedInstance;

- (id)init;

@end
