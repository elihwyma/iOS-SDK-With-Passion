/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class HFServiceNameComponents, UIColor, UIVisualEffect;

@protocol HFStringGenerator;

@interface HUGridServiceCellTextConfiguration : NSObject

{
    HFServiceNameComponents *_nameComponents;
    id <HFStringGenerator> _descriptionText;
    UIColor *_nameTextColor;
    UIColor *_descriptionTextColor;
    UIVisualEffect *_descriptionTextEffect;
}

@property (retain, nonatomic) HFServiceNameComponents *nameComponents;
@property (retain, nonatomic) id <HFStringGenerator> descriptionText;
@property (retain, nonatomic) UIColor *nameTextColor;
@property (retain, nonatomic) UIColor *descriptionTextColor;
@property (retain, nonatomic) UIVisualEffect *descriptionTextEffect;

@end
