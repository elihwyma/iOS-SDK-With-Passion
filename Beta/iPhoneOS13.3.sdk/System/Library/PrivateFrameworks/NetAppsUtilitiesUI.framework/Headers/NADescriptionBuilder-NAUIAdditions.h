/*
 Image: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI
 */

#import <NetAppsUtilities/NADescriptionBuilder.h>

@interface NADescriptionBuilder (NAUIAdditions)

- (id)appendCGFloat:(double)arg1 withName:(id)arg2 decimalPrecision:(unsigned long long)arg3;
- (id)appendCGFloat:(double)arg1 withName:(id)arg2;
- (id)appendCGPoint:(struct CGPoint)arg1 withName:(id)arg2;
- (id)appendCGSize:(struct CGSize)arg1 withName:(id)arg2;
- (id)appendCGRect:(struct CGRect)arg1 withName:(id)arg2;

@end
