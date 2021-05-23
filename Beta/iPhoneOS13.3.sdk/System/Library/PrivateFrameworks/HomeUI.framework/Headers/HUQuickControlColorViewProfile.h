/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUQuickControlViewProfile.h>

@protocol HFColorProfile;

@interface HUQuickControlColorViewProfile : HUQuickControlViewProfile

{
    _Bool _supportsRGBColor;
    id <HFColorProfile> _colorProfile;
    unsigned long long _mode;
}

@property (nonatomic) _Bool supportsRGBColor;
@property (retain, nonatomic) id <HFColorProfile> colorProfile;
@property (nonatomic) unsigned long long mode;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
