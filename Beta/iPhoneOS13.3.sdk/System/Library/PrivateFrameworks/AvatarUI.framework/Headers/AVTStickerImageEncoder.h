/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AVTStickerImageEncoder : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)fileExtension;
- (id)imageFromData:(id)arg1 error:(id *)arg2;
- (id)imageFromURL:(id)arg1 error:(id *)arg2;
- (id)dataFromImage:(id)arg1;
- (id)dataFromImage:(id)arg1 clippingRect:(struct CGRect)arg2;

@end
