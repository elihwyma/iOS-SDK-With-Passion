/*
 Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

#import <NSObject.h>

@class NSString;

@interface IPAGeometryOperator : NSObject

{
    NSString *_identifer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (id)transformForGeometry:(id)arg1;

@end
