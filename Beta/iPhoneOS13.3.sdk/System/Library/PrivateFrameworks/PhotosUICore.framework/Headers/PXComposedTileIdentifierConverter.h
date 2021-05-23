/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface PXComposedTileIdentifierConverter : NSObject

{
    NSArray *_converters;
}

@property (copy, nonatomic, readonly) NSArray *converters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)reverseTransformTileIdentifier:(struct PXTileIdentifier *)arg1;
- (_Bool)transformTileIdentifier:(struct PXTileIdentifier *)arg1 group:(unsigned long long *)arg2;
- (id)initWithTileIdentifierConverters:(id)arg1;

@end
