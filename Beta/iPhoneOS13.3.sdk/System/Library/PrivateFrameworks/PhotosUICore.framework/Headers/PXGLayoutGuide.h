/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

@class PXGLayout;

@interface PXGLayoutGuide : PXObservable

{
    PXGLayout *_referenceLayout;
    struct CGRect _referenceRect;
}

@property (nonatomic) struct CGRect referenceRect;
@property (weak, nonatomic) PXGLayout *referenceLayout;

- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)setRect:(struct CGRect)arg1 inLayout:(id)arg2;
- (struct CGRect)rectInLayout:(id)arg1;

@end
