/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXJSONObject.h>

@class NSString;

@interface SXConditionalHints : SXJSONObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool autoplacement;
@property (nonatomic, readonly) _Bool components;
@property (nonatomic, readonly) _Bool componentLayouts;
@property (nonatomic, readonly) _Bool componentStyles;
@property (nonatomic, readonly) _Bool componentTextStyles;
@property (nonatomic, readonly) _Bool documentStyle;
@property (nonatomic, readonly) _Bool textStyles;

- (_Bool)BOOLValueForJSONValue:(id)arg1 type:(int)arg2;
- (_Bool)autoplacementWithValue:(id)arg1 withType:(int)arg2;
- (_Bool)componentsWithValue:(id)arg1 withType:(int)arg2;
- (_Bool)componentLayoutsWithValue:(id)arg1 withType:(int)arg2;
- (_Bool)componentStylesWithValue:(id)arg1 withType:(int)arg2;
- (_Bool)componentTextStylesWithValue:(id)arg1 withType:(int)arg2;
- (_Bool)documentStyleWithValue:(id)arg1 withType:(int)arg2;
- (_Bool)textStylesWithValue:(id)arg1 withType:(int)arg2;

@end
