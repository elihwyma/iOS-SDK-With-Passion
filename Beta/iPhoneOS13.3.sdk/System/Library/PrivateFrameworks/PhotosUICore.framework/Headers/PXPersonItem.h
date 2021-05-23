/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class PHPerson, UIImage;

@interface PXPersonItem : NSObject

{
    int _faceImageRequestID;
    PHPerson *_modelObject;
    CDUnknownBlockType _faceImageLoadingCompletionBlock;
    CDUnknownBlockType _fastDisplayBlock;
    UIImage *_faceImage;
}

@property int faceImageRequestID;
@property (copy) CDUnknownBlockType faceImageLoadingCompletionBlock;
@property (copy) CDUnknownBlockType fastDisplayBlock;
@property (weak) UIImage *faceImage;
@property (retain, nonatomic) PHPerson *modelObject;

- (id)initWithPerson:(id)arg1;
- (void)updateWithModel:(id)arg1;

@end
