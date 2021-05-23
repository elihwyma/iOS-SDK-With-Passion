/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIService.framework/AccessibilityUIService
 */

#import <NSObject.h>

@class NSBundle, NSString;

@interface AXUIAlertStyleProvider : NSObject

{
    NSBundle *_bundle;
}

@property (retain, nonatomic) NSBundle *bundle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)styleProvider;

- (id)alertTextFontForType:(unsigned long long)arg1;
- (id)alertTextColorForType:(unsigned long long)arg1;
- (double)alertTextLineHeightOffsetForType:(unsigned long long)arg1;
- (int)alertBackgroundStyleForType:(unsigned long long)arg1;
- (struct CGSize)alertBackgroundSizeForType:(unsigned long long)arg1;
- (_Bool)alertShouldGrowInAxis:(long long)arg1 forType:(unsigned long long)arg2;
- (struct UIEdgeInsets)alertContentEdgeInsetsForType:(unsigned long long)arg1;
- (id)alertSubtitleTextFontForType:(unsigned long long)arg1;
- (id)alertSubtitleTextColorForType:(unsigned long long)arg1;
- (double)alertSubtitleTextLineHeightOffsetForType:(unsigned long long)arg1;
- (double)alertSubtitleTextVerticalSpacingHeightWithTextForType:(unsigned long long)arg1;
- (struct UIEdgeInsets)alertIconImageEdgeInsetsForType:(unsigned long long)arg1;
- (struct UIEdgeInsets)alertEdgeInsetsForType:(unsigned long long)arg1;
- (int)alertPositionForType:(unsigned long long)arg1;
- (double)alertFadeAnimationDurationForType:(unsigned long long)arg1;
- (double)alertBackgroundCornerRadiusForType:(unsigned long long)arg1;

@end
