/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PXTileIdentifierIdentityConverter : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)reverseTransformTileIdentifier:(struct PXTileIdentifier *)arg1;
- (_Bool)transformTileIdentifier:(struct PXTileIdentifier *)arg1 group:(unsigned long long *)arg2;

@end
