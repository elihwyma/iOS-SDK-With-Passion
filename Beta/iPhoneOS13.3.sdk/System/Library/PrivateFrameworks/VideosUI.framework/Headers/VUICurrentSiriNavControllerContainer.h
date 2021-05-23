/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class UINavigationController;

@interface VUICurrentSiriNavControllerContainer : NSObject

{
    UINavigationController *_currentSiriNavController;
}

@property (weak, nonatomic) UINavigationController *currentSiriNavController;

+ (id)sharedInstance;
+ (_Bool)isRunningInSiriPluggin;

- (id)init;

@end
