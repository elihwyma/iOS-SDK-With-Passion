/*
 Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface HROnboardingBulletPoint : NSObject

{
    UIImage *_bulletImage;
    NSString *_bulletTitleString;
    NSString *_bulletBodyString;
}

@property (nonatomic, readonly) UIImage *bulletImage;
@property (nonatomic, readonly) NSString *bulletTitleString;
@property (nonatomic, readonly) NSString *bulletBodyString;

+ (id)bulletPointWithImage:(id)arg1 title:(id)arg2 body:(id)arg3;

- (id)initWithImage:(id)arg1 title:(id)arg2 body:(id)arg3;

@end
