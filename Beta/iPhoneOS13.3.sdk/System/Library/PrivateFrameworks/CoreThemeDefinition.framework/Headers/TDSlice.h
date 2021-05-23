/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreData/NSManagedObject.h>

@class NSString, TDElementProduction, TDRenditionSpec;

@interface TDSlice : NSManagedObject

{
    struct CGRect _sliceRect;
}

@property (retain, nonatomic) TDElementProduction *production;
@property (retain, nonatomic) TDRenditionSpec *rendition;
@property (nonatomic) struct CGRect sliceRect;
@property (nonatomic) struct CGRect primitiveSliceRect;
@property (retain, nonatomic) NSString *sliceRectString;

- (void)awakeFromFetch;

@end
