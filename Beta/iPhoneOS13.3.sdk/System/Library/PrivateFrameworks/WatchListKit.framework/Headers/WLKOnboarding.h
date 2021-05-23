/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@interface WLKOnboarding : NSObject

+ (_Bool)isOptedIn;
+ (void)optInUserIfNeededAndRefreshConfig:(CDUnknownBlockType)arg1;
+ (void)optInUserIfNeeded:(CDUnknownBlockType)arg1;

@end
