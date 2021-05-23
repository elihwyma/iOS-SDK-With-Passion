/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <TSReading/TSDRep.h>

@interface TSDRep (SXAccessibility)

- (struct CGRect)accessibilityFrame;
- (_Bool)isAccessibilityElement;
- (id)_accessibilityWindow;
- (id)_accessibilityParentForFindingScrollParent;
- (struct CGRect)SXAXConvertNaturalRectToScreenSpace:(struct CGRect)arg1;
- (struct CGRect)SXAXConvertScreenRectToNaturalSpace:(struct CGRect)arg1;
- (struct CGPoint)SXAXConvertNaturalPointToScreenSpace:(struct CGPoint)arg1;
- (struct CGPoint)SXAXConvertScreenPointToNaturalSpace:(struct CGPoint)arg1;

@end
