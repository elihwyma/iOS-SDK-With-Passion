/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSURL;

@interface PXFileBackedImageKey : NSObject

{
    NSURL *_url;
    struct CGSize _size;
}

@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) struct CGSize size;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithUrl:(id)arg1 size:(struct CGSize)arg2;

@end
