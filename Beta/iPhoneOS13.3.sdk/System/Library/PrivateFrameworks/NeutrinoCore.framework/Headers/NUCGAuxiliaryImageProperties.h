/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@protocol NUAuxiliaryImage;

@interface NUCGAuxiliaryImageProperties : NSObject

{
    id _imageSource;
    NSString *_auxiliaryImageTypeCGIdentifier;
    NSDictionary *_auxCoreGraphicsInfoDictionary;
    id <NUAuxiliaryImage> _auxImage;
    CDStruct_d58201db _size;
}

@property (retain) NSDictionary *auxCoreGraphicsInfoDictionary;
@property (retain) id <NUAuxiliaryImage> auxImage;
@property (readonly) NSString *auxiliaryImageTypeCGIdentifier;
@property CDStruct_912cb5d2 size;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)auxiliaryCoreGraphicsInfoDictionary:(out id *)arg1;
- (id)auxiliaryImage:(out id *)arg1;
- (id)initWithCGProperties:(id)arg1 imageSource:(struct CGImageSource *)arg2;

@end
