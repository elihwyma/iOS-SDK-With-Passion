/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSOperation.h>

@class NSObject, NSString, TSKDocumentRoot, UIView;

@protocol TSSPreset;

@interface TSDSwatchRenderingOperation : NSOperation

{
    UIView *mView;
    NSObject<TSSPreset> *mPreset;
    struct CGSize mImageSize;
    double mImageScale;
    struct CGRect mSwatchFrame;
    TSKDocumentRoot *mDocumentRoot;
    struct CGImage *mDeliveredImage;
    unsigned long long mInsertPopoverPageType;
    unsigned long long mInsertPopoverPageNumber;
    NSString *mIdentifier;
}

@property (retain) UIView *view;
@property (readonly) NSObject<TSSPreset> *preset;
@property (readonly) struct CGSize imageSize;
@property (readonly) double imageScale;
@property (readonly) struct CGRect swatchFrame;
@property unsigned long long insertPopoverPageType;
@property unsigned long long insertPopoverPageNumber;
@property (copy) NSString *identifier;
@property (nonatomic, readonly) struct CGImage *deliveredImage;

- (void)dealloc;
- (void)main;
- (struct UIEdgeInsets)swatchEdgeInsets;
- (_Bool)needsPressedStateBackground;
- (void)p_animateSwatchIn;
- (struct CGImage *)p_newSwatchPressedStateBackgroundFromCGImage:(struct CGImage *)arg1;
- (void)p_deliverResultOnMainThread:(id)arg1;
- (void)doWorkWithReadLock;
- (id)initWithPreset:(id)arg1 imageSize:(struct CGSize)arg2 imageScale:(double)arg3 swatchFrame:(struct CGRect)arg4 documentRoot:(id)arg5;
- (void)deliverCGImage:(struct CGImage *)arg1;

@end
