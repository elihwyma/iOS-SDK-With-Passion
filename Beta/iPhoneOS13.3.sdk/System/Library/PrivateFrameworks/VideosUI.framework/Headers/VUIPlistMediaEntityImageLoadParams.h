/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface VUIPlistMediaEntityImageLoadParams : NSObject

{
    NSString *_imageIdentifier;
    NSURL *_imageURL;
    NSString *_baseImageIdentifier;
    unsigned long long _imageType;
}

@property (copy, nonatomic) NSURL *imageURL;
@property (copy, nonatomic) NSString *baseImageIdentifier;
@property (nonatomic) unsigned long long imageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *imageIdentifier;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)initWithImageURL:(id)arg1 baseImageIdentifier:(id)arg2 imageType:(unsigned long long)arg3;

@end
