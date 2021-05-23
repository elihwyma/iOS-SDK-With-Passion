/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXJSONObject.h>

@class NSString, SXBorder, SXComponentMask, SXComponentShadow, SXDataTableStyle, SXFill, SXJSONArray, UIColor;

@interface SXComponentStyle : SXJSONObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) SXFill *fill;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) SXComponentShadow *shadow;
@property (nonatomic, readonly) SXBorder *border;
@property (nonatomic, readonly) double opacity;
@property (nonatomic, readonly) double cornerRadius;
@property (nonatomic, readonly) SXDataTableStyle *tableStyle;
@property (nonatomic, readonly) unsigned long long traits;
@property (nonatomic, readonly) SXComponentMask *mask;
@property (nonatomic, readonly) SXJSONArray *conditional;
@property (nonatomic, readonly) NSString *identifier;

+ (CDUnknownBlockType)valueClassBlockForPropertyWithName:(id)arg1;

- (id)fillWithValue:(id)arg1 withType:(int)arg2;
- (id)maskWithValue:(id)arg1 withType:(int)arg2;

@end
