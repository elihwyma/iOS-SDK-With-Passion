/*
 Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

#import <Foundation/NSObject.h>

@class NSURL;

@interface QLThumbnailReply : NSObject

{
    CDUnknownBlockType _drawingBlock;
    CDUnknownBlockType _drawInContextBlock;
    CDUnknownBlockType _ioSurfaceBlock;
    NSURL *_imageURL;
    unsigned long long _type;
    struct CGSize _contextSize;
}

@property (copy, nonatomic) CDUnknownBlockType drawingBlock;
@property (copy, nonatomic) CDUnknownBlockType drawInContextBlock;
@property (copy, nonatomic) CDUnknownBlockType ioSurfaceBlock;
@property (retain, nonatomic) NSURL *imageURL;
@property (nonatomic) struct CGSize contextSize;
@property (nonatomic) unsigned long long type;

+ (id)replyWithContextSize:(struct CGSize)arg1 drawingBlock:(CDUnknownBlockType)arg2;
+ (id)replyWithContextSize:(struct CGSize)arg1 currentContextDrawingBlock:(CDUnknownBlockType)arg2;
+ (id)replyWithImageFileURL:(id)arg1;
+ (id)replyWithContextSize:(struct CGSize)arg1 ioSurfaceBlock:(CDUnknownBlockType)arg2;

@end
