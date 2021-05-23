/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface HKDisplayCategoryController : NSObject

{
    NSMutableArray *_displayCategories;
    NSMutableDictionary *_displayCategoriesByCategoryID;
}

+ (id)sharedInstance;

- (id)init;
- (id)categoryWithID:(long long)arg1;
- (id)allDisplayCategories;
- (void)_initializeDisplayCategories;

@end
