/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

#import <HomeUI/Swift-Protocol.h>

@class UIColor;

@protocol HFDynamicFormattingValue, HFIconDescriptor;

@interface HUQuickControlViewProfile : NSObject <Swift>

{
    unsigned long long _controlSize;
    id <HFDynamicFormattingValue> _supplementaryFormattedValue;
    id <HFIconDescriptor> _decorationIconDescriptor;
    unsigned long long _orientation;
    UIColor *_tintColor;
}

@property (nonatomic, readonly) double gestureDragCoefficient;
@property (nonatomic) unsigned long long controlSize;
@property (nonatomic, readonly) _Bool supportsTouchContinuation;
@property (retain, nonatomic) id <HFDynamicFormattingValue> supplementaryFormattedValue;
@property (retain, nonatomic) id <HFIconDescriptor> decorationIconDescriptor;
@property (nonatomic) unsigned long long orientation;
@property (retain, nonatomic) UIColor *tintColor;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
