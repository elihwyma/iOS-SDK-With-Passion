/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

#import <Foundation/NSValue.h>

@interface NSValue (CCUILayout)

@property (readonly) struct CCUILayoutPoint ccui_pointValue;
@property (readonly) struct CCUILayoutSize ccui_sizeValue;
@property (readonly) struct CCUILayoutRect ccui_rectValue;

+ (id)ccui_valueWithLayoutPoint:(struct CCUILayoutPoint)arg1;
+ (id)ccui_valueWithLayoutRect:(struct CCUILayoutRect)arg1;
+ (id)ccui_valueWithLayoutSize:(struct CCUILayoutSize)arg1;

@end
