/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSSet;

@interface HFAccessoryProfileFilterOptions : NSObject

{
    _Bool _byFavorites;
    NSSet *_byAccessories;
    NSSet *_byCategoryTypes;
    NSSet *_byClasses;
    NSSet *_byManufacturers;
    NSSet *_byModels;
    NSSet *_byRooms;
    CDUnknownBlockType _byFilter;
}

@property (copy, nonatomic) NSSet *byAccessories;
@property (copy, nonatomic) NSSet *byCategoryTypes;
@property (copy, nonatomic) NSSet *byClasses;
@property (nonatomic) _Bool byFavorites;
@property (copy, nonatomic) NSSet *byManufacturers;
@property (copy, nonatomic) NSSet *byModels;
@property (copy, nonatomic) NSSet *byRooms;
@property (copy, nonatomic) CDUnknownBlockType byFilter;

@end
