/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSString, VUIImageInfoManagedObject;

__attribute__((visibility("hidden")))
@interface VUISidebandMediaEntityImageLoadParams : NSObject

{
    VUIImageInfoManagedObject *_imageInfo;
    unsigned long long _imageTypeInternal;
    NSString *_imageIdentifierInternal;
}

@property (nonatomic) unsigned long long imageTypeInternal;
@property (retain, nonatomic) NSString *imageIdentifierInternal;
@property (retain, nonatomic) VUIImageInfoManagedObject *imageInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long imageType;
@property (copy, nonatomic, readonly) NSString *imageIdentifier;

- (_Bool)isEqual:(id)arg1;
- (id)initWithVideoManagedObject:(id)arg1 imageType:(unsigned long long)arg2;

@end
