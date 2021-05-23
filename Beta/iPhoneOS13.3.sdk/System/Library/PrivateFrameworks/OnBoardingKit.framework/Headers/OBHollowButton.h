/*
 Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

#import <OnBoardingKit/OBTrayButton.h>

@class NSObject;

__attribute__((visibility("hidden")))
@interface OBHollowButton : OBTrayButton

{
    NSObject *_target;
    SEL _downPressSelector;
    SEL _upLiftSelector;
}

@property (retain, nonatomic) NSObject *target;
@property (nonatomic) SEL downPressSelector;
@property (nonatomic) SEL upLiftSelector;

+ (id)hollowButtonWithTarget:(id)arg1 downPressSelector:(SEL)arg2 upLiftSelector:(SEL)arg3;

- (void)buttonPressed:(id)arg1;

@end
