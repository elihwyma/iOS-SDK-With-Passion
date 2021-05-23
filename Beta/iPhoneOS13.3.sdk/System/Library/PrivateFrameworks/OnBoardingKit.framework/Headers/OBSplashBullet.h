/*
 Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

#import <Foundation/NSObject.h>

@class NSString, OBImage;

@interface OBSplashBullet : NSObject

{
    NSString *_text;
    OBImage *_icon;
}

@property (copy) NSString *text;
@property (retain) OBImage *icon;

@end
