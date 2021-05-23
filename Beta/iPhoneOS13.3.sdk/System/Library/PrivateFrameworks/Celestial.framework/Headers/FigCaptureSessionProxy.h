/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@protocol FigCaptureSessionPreviewTapDelegate;

@interface FigCaptureSessionProxy : NSObject

{
    struct OpaqueFigCaptureSession *_session;
    long long _identifier;
    _Bool _previewTapOpened;
    id <FigCaptureSessionPreviewTapDelegate> _previewTapDelegate;
}

@property (readonly) long long identifier;

+ (void)initialize;

- (void)dealloc;
- (int)openPreviewTapWithDelegate:(id)arg1;
- (void)closePreviewTap;
- (id)initWithFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1 identifier:(long long)arg2;

@end
