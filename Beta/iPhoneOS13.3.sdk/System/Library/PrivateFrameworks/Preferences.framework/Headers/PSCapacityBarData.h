/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface PSCapacityBarData : NSObject

{
    NSArray *_orderedCategories;
    NSArray *_adjustedCategories;
    _Bool _hideTinyCategories;
    int _sortStyle;
    long long _categoryLimit;
    long long _capacity;
    long long _bytesUsed;
    NSArray *_categories;
}

@property long long categoryLimit;
@property _Bool hideTinyCategories;
@property int sortStyle;
@property long long capacity;
@property long long bytesUsed;
@property (retain, nonatomic) NSArray *categories;
@property (readonly) NSArray *orderedCategories;
@property (readonly) NSArray *adjustedCategories;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
