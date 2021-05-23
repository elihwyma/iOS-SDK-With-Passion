/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

@class UIImage, UIPDFPage, UIPDFPageRenderOperation;

__attribute__((visibility("hidden")))
@interface UIPDFPageRenderJob : NSObject

{
    UIPDFPage *_page;
    unsigned long long _pageIndex;
    struct CGSize _size;
    long long _priority;
    UIImage *_image;
    UIPDFPageRenderOperation *_operation;
    id _target;
    SEL _callback;
    id _userData;
    _Bool _sendPending;
    _Bool _releaseWhenDone;
    struct os_unfair_lock_s _lock;
}

@property (retain, readonly) UIImage *image;
@property UIPDFPageRenderOperation *operation;
@property (readonly) unsigned long long pageIndex;
@property (readonly) long long priority;
@property _Bool releaseWhenDone;
@property (readonly) struct CGSize size;

- (void)dealloc;
- (void)cancel;
- (void)cancelOperation;
- (_Bool)hasPage;
- (id)initWithPage:(id)arg1 maxSize:(struct CGSize)arg2 queuePriority:(long long)arg3;
- (void)cancelOperationForTarget:(id)arg1;
- (void)setTarget:(id)arg1 callback:(SEL)arg2 userData:(id)arg3;
- (void)releaseOperation;
- (void)renderImage;
- (void)sendImage;
- (void)sendImageTo:(id)arg1 callback:(SEL)arg2 userData:(id)arg3;

@end
