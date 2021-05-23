/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXDataTableElementStyle.h>

@class SXDataTableBorder, SXJSONArray, UIColor;

@interface SXDataTableColumnStyle : SXDataTableElementStyle

@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) SXDataTableBorder *divider;
@property (nonatomic, readonly) double width;
@property (nonatomic, readonly) struct _SXConvertibleValue minimumWidth;
@property (nonatomic, readonly) SXJSONArray *conditional;
@property (nonatomic, readonly) SXJSONArray *selectors;

+ (CDUnknownBlockType)valueClassBlockForPropertyWithName:(id)arg1;

@end
