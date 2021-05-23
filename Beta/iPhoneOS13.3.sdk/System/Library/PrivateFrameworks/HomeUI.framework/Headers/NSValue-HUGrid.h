/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSValue.h>

@interface NSValue (HUGrid)

@property (nonatomic, readonly) struct HUGridPosition gridPositionValue;
@property (nonatomic, readonly) struct HUGridSize gridSizeValue;

+ (id)valueWithGridPosition:(struct HUGridPosition)arg1;
+ (id)valueWithGridSize:(struct HUGridSize)arg1;

@end
