/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUQuickControlViewProfile.h>

@class HFNumberValueConstraints, NSString;

@interface HUQuickControlPushButtonViewProfile : HUQuickControlViewProfile

{
    _Bool _toggleColorScheme;
}

@property (nonatomic) _Bool toggleColorScheme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) HFNumberValueConstraints *primaryValueConstraints;
@property (nonatomic, readonly) HFNumberValueConstraints *secondaryValueConstraints;
@property (nonatomic, readonly) _Bool hasSecondaryValue;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
