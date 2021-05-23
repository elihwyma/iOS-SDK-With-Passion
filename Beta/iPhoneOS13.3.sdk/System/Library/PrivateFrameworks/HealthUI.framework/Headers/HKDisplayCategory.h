/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKFillStyle, NSString, UIColor, UIImage;

@interface HKDisplayCategory : NSObject

{
    CDUnknownBlockType _keyColor;
    long long _categoryID;
    NSString *_categoryName;
    NSString *_displayName;
    NSString *_largeListIconName;
    NSString *_listIconName;
    NSString *_healthDataIconName;
    NSString *_shareIconName;
}

@property (nonatomic, readonly) long long categoryID;
@property (nonatomic, readonly) NSString *categoryName;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *largeListIconName;
@property (nonatomic, readonly) NSString *listIconName;
@property (nonatomic, readonly) NSString *healthDataIconName;
@property (nonatomic, readonly) NSString *shareIconName;
@property (nonatomic, readonly) UIImage *largeListIcon;
@property (nonatomic, readonly) UIImage *listIcon;
@property (nonatomic, readonly) UIImage *healthDataIcon;
@property (nonatomic, readonly) UIImage *shareIcon;
@property (nonatomic, readonly) _Bool isMeCategory;
@property (nonatomic, readonly) _Bool isTopLevelCategory;
@property (nonatomic, readonly) UIColor *color;
@property (nonatomic, readonly) HKFillStyle *fillStyle;

+ (id)topLevelCategoryIdentifiers;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
