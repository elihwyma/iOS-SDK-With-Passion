/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSTLayoutProcessChangesActions : NSObject

{
    _Bool mLayoutInvalidate;
    _Bool mLayoutInvalidateProvider;
    _Bool mLayoutInvalidateSize;
    _Bool mLayoutInvalidateTableNameVisibility;
    _Bool mLayoutSpacesInvalidateCoordinates;
    _Bool mLayoutSpacesInvalidateTableOffsets;
}

@property (nonatomic) _Bool layoutInvalidate;
@property (nonatomic) _Bool layoutInvalidateProvider;
@property (nonatomic) _Bool layoutInvalidateSize;
@property (nonatomic) _Bool layoutInvalidateTableNameVisibility;
@property (nonatomic) _Bool layoutSpacesInvalidateCoordinates;
@property (nonatomic) _Bool layoutSpacesInvalidateTableOffsets;

@end
