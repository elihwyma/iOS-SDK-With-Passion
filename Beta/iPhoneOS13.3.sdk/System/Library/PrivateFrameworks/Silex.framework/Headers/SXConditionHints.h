/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXJSONObject.h>

@class NSString;

@interface SXConditionHints : SXJSONObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool minViewportWidth;
@property (nonatomic, readonly) _Bool maxViewportWidth;
@property (nonatomic, readonly) _Bool minViewportAspectRatio;
@property (nonatomic, readonly) _Bool maxViewportAspectRatio;
@property (nonatomic, readonly) _Bool minContentSizeCategory;
@property (nonatomic, readonly) _Bool maxContentSizeCategory;
@property (nonatomic, readonly) _Bool minColumns;
@property (nonatomic, readonly) _Bool maxColumns;
@property (nonatomic, readonly) _Bool platform;
@property (nonatomic, readonly) _Bool viewLocation;
@property (nonatomic, readonly) _Bool minSpecVersion;
@property (nonatomic, readonly) _Bool maxSpecVersion;
@property (nonatomic, readonly) _Bool horizontalSizeClass;
@property (nonatomic, readonly) _Bool verticalSizeClass;
@property (nonatomic, readonly) _Bool subscriptionStatus;
@property (nonatomic, readonly) _Bool testing;
@property (nonatomic, readonly) _Bool preferredColorScheme;

+ (id)jsonPropertyNameForObjCPropertyName:(id)arg1;

- (_Bool)BOOLValueForJSONValue:(id)arg1 type:(int)arg2;
- (_Bool)minViewportWidthWithValue:(id)arg1 withType:(int)arg2;
- (_Bool)maxViewportWidthWithValue:(id)arg1 withType:(int)arg2;
- (_Bool)minViewportAspectRatioWithValue:(id)arg1 withType:(int)arg2;
- (_Bool)maxViewportAspectRatioWithValue:(id)arg1 withType:(int)arg2;
- (_Bool)minContentSizeCategoryWithValue:(id)arg1 withType:(int)arg2;
- (_Bool)maxContentSizeCategoryWithValue:(id)arg1 withType:(int)arg2;
- (_Bool)minColumnsWithValue:(id)arg1 withType:(int)arg2;
- (_Bool)maxColumnsWithValue:(id)arg1 withType:(int)arg2;
- (_Bool)platformWithValue:(id)arg1 withType:(int)arg2;
- (_Bool)viewLocationWithValue:(id)arg1 withType:(int)arg2;
- (_Bool)minSpecVersionWithValue:(id)arg1 withType:(int)arg2;
- (_Bool)maxSpecVersionWithValue:(id)arg1 withType:(int)arg2;
- (_Bool)horizontalSizeClassWithValue:(id)arg1 withType:(int)arg2;
- (_Bool)verticalSizeClassWithValue:(id)arg1 withType:(int)arg2;
- (_Bool)subscriptionStatusWithValue:(id)arg1 withType:(int)arg2;
- (_Bool)testingWithValue:(id)arg1 withType:(int)arg2;
- (_Bool)preferredColorSchemeWithValue:(id)arg1 withType:(int)arg2;

@end
