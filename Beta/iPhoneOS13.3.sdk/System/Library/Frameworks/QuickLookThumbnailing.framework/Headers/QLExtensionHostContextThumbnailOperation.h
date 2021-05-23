/*
 Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

#import <QuickLookThumbnailing/QLAsynchronousOperation.h>

@class QLThumbnailHostContext;

@protocol QLTExtensionThumbnailItem;

__attribute__((visibility("hidden")))
@interface QLExtensionHostContextThumbnailOperation : QLAsynchronousOperation

{
    QLThumbnailHostContext *_hostContext;
    CDUnknownBlockType _serviceErrorHandler;
    CDUnknownBlockType _completionHandler;
    id <QLTExtensionThumbnailItem> _item;
    double _minimumSize;
    double _scale;
    unsigned long long _badgeType;
    struct CGSize _size;
}

@property (retain, nonatomic) QLThumbnailHostContext *hostContext;
@property (copy, nonatomic) CDUnknownBlockType serviceErrorHandler;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (retain, nonatomic) id <QLTExtensionThumbnailItem> item;
@property (nonatomic) struct CGSize size;
@property (nonatomic) double minimumSize;
@property (nonatomic) double scale;
@property (nonatomic) unsigned long long badgeType;

- (void)main;
- (void)finish;
- (id)initWithThumbnailHostContext:(id)arg1 item:(id)arg2 size:(struct CGSize)arg3 minimumSize:(double)arg4 scale:(double)arg5 badgeType:(unsigned long long)arg6 completionHandler:(CDUnknownBlockType)arg7 serviceErrorHandler:(CDUnknownBlockType)arg8;

@end
