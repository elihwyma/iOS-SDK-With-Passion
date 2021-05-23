/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXDataTableElementStyle.h>

@class SXDataTableBorder, SXJSONArray, UIColor;

@interface SXDataTableRowStyle : SXDataTableElementStyle

@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) SXDataTableBorder *divider;
@property (nonatomic, readonly) struct _SXConvertibleValue height;
@property (nonatomic, readonly) SXJSONArray *conditional;
@property (nonatomic, readonly) SXJSONArray *selectors;

+ (CDUnknownBlockType)valueClassBlockForPropertyWithName:(id)arg1;

@end
