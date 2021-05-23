/*
 Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface OBSplashContent : NSObject

{
    NSString *_text;
    NSArray *_bullets;
}

@property (copy) NSString *text;
@property (copy) NSArray *bullets;

@end
