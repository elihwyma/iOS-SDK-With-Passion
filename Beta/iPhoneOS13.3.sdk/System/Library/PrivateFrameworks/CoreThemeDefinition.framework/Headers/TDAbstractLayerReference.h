/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString;

@interface TDAbstractLayerReference : NSManagedObject

{
    struct CGRect _frameRect;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *frameRectString;
@property (nonatomic) struct CGRect frameRect;
@property (retain, nonatomic) NSNumber *opacity;
@property (retain, nonatomic) NSNumber *blendMode;
@property (nonatomic) _Bool makeOpaqueIfPossible;
@property (nonatomic) struct CGRect primitiveFrameRect;

- (void)awakeFromFetch;

@end
