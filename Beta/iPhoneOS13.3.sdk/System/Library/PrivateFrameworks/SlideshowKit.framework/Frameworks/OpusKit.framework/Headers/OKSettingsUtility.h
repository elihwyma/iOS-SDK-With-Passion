/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <Foundation/NSObject.h>

@interface OKSettingsUtility : NSObject

+ (id)stringFromObject:(id)arg1;
+ (id)normalizedObjectFromValue:(id)arg1;
+ (id)valueForObject:(id)arg1 ofType:(unsigned long long)arg2 optionalSubType:(unsigned long long)arg3 optionalClass:(Class)arg4 optionalMapping:(id)arg5 resolution:(id)arg6;
+ (id)valueForKey:(id)arg1 ofType:(unsigned long long)arg2 settings:(id)arg3 optionalSubType:(unsigned long long)arg4 optionalClass:(Class)arg5 optionalMapping:(id)arg6 resolution:(id)arg7;
+ (id)_settingObjectForKey:(id)arg1 settings:(id)arg2 resolution:(id)arg3;
+ (id)numberFromObject:(id)arg1;
+ (id)enumFromObject:(id)arg1 mapping:(id)arg2;
+ (id)optionsFromObject:(id)arg1 mapping:(id)arg2;
+ (struct CGRect)rectFromObject:(id)arg1;
+ (struct CGPoint)pointFromObject:(id)arg1;
+ (struct CGSize)sizeFromObject:(id)arg1;
+ (struct UIEdgeInsets)edgeInsetsFromObject:(id)arg1;
+ (struct CLLocationCoordinate2D)coordinateLocationFromObject:(id)arg1;
+ (CDStruct_b7cb895d)coordinateRegionFromObject:(id)arg1;
+ (struct UIOffset)offsetFromObject:(id)arg1;
+ (id)attributedStringFromObject:(id)arg1;
+ (id)urlFromObject:(id)arg1;
+ (id)colorFromObject:(id)arg1;
+ (id)indexPath2DFromObject:(id)arg1;
+ (id)widgetFromObject:(id)arg1;
+ (id)settingsObjectFromObject:(id)arg1 class:(Class)arg2 resolution:(id)arg3;
+ (id)dynamicSettingsObjectFromObject:(id)arg1 class:(Class)arg2 resolution:(id)arg3;
+ (id)arrayFromObject:(id)arg1 type:(unsigned long long)arg2;
+ (id)arrayOfURLFromObject:(id)arg1;
+ (id)arrayOfStringFromObject:(id)arg1;
+ (id)arrayOfDictionaryFromObject:(id)arg1;
+ (id)arrayOfWidgetFromObject:(id)arg1;
+ (id)arrayOfSettingsObjectsFromObject:(id)arg1 class:(Class)arg2 resolution:(id)arg3;
+ (id)arrayOfDynamicSettingsObjectsFromObject:(id)arg1 class:(Class)arg2 resolution:(id)arg3;
+ (id)dictionaryFromObject:(id)arg1 type:(unsigned long long)arg2;
+ (id)dictionaryOfDictionaryFromObject:(id)arg1;
+ (id)dictionaryOfArrayFromObject:(id)arg1;
+ (id)dictionaryOfSettingsObjectsFromObject:(id)arg1 class:(Class)arg2 resolution:(id)arg3;
+ (id)dictionaryOfDynamicSettingsObjectsFromObject:(id)arg1 class:(Class)arg2 resolution:(id)arg3;

@end
