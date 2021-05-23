/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXDataTableElementStyle.h>

@class NSArray, NSString, SXDataTableBorderSides, SXJSONArray, SXPadding, UIColor;

@interface SXDataTableCellStyle : SXDataTableElementStyle

@property (nonatomic, readonly) NSString *textStyle;
@property (nonatomic, readonly) NSArray *textStyles;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) SXDataTableBorderSides *border;
@property (nonatomic, readonly) struct _SXConvertibleValue height;
@property (nonatomic, readonly) double width;
@property (nonatomic, readonly) struct _SXConvertibleValue minimumWidth;
@property (nonatomic, readonly) SXPadding *padding;
@property (nonatomic, readonly) unsigned long long verticalAlignment;
@property (nonatomic, readonly) unsigned long long horizontalAlignment;
@property (nonatomic, readonly) SXJSONArray *conditional;
@property (nonatomic, readonly) SXJSONArray *selectors;

+ (CDUnknownBlockType)valueClassBlockForPropertyWithName:(id)arg1;

- (id)textStylesWithValue:(id)arg1 withType:(int)arg2;
- (id)paddingWithValue:(id)arg1 withType:(int)arg2;
- (unsigned long long)verticalAlignmentWithValue:(id)arg1 withType:(int)arg2;
- (unsigned long long)horizontalAlignmentWithValue:(id)arg1 withType:(int)arg2;

@end
