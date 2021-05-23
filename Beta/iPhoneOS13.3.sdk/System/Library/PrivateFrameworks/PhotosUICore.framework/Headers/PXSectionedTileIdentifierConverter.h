/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSIndexSet, NSString, PXSectionedDataSource;

@interface PXSectionedTileIdentifierConverter : NSObject

{
    PXSectionedDataSource *_fromDataSource;
    PXSectionedDataSource *_toDataSource;
    NSArray *_changeDetails;
    NSIndexSet *_reloadedTileKindsOnObjectChanged;
}

@property (nonatomic, readonly) PXSectionedDataSource *fromDataSource;
@property (nonatomic, readonly) PXSectionedDataSource *toDataSource;
@property (nonatomic, readonly) NSArray *changeDetails;
@property (copy, nonatomic) NSIndexSet *reloadedTileKindsOnObjectChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)reverseTransformTileIdentifier:(struct PXTileIdentifier *)arg1;
- (_Bool)transformTileIdentifier:(struct PXTileIdentifier *)arg1 group:(unsigned long long *)arg2;
- (id)initWithFromDataSource:(id)arg1 toDataSource:(id)arg2 changeDetails:(id)arg3;

@end
