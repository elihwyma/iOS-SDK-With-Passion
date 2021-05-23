/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXRunNode.h>

@class NSArray, NSString, NSURL, PHContentEditingOutput, PUReviewAsset;

@protocol PXRunNodeDelegate;

__attribute__((visibility("hidden")))
@interface PUReviewAdjustmentURLNode : PXRunNode

{
    NSURL *_adjustmentURL;
    NSURL *_directory;
    PUReviewAsset *_reviewAsset;
    PHContentEditingOutput *_contentEditingOutput;
}

@property (nonatomic, readonly) NSURL *directory;
@property (nonatomic, readonly) PUReviewAsset *reviewAsset;
@property (nonatomic, readonly) PHContentEditingOutput *contentEditingOutput;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long state;
@property (readonly, getter=isWaiting) _Bool waiting;
@property (readonly, getter=isRunning) _Bool running;
@property (readonly, getter=isComplete) _Bool complete;
@property (readonly, getter=isCanceled) _Bool canceled;
@property (weak, nonatomic) id <PXRunNodeDelegate> delegate;
@property (copy, nonatomic, readonly) NSArray *dependencies;
@property (nonatomic, readonly) NSURL *adjustmentURL;

- (void)run;
- (id)initWithReviewAsset:(id)arg1 directory:(id)arg2 contentEditingOutput:(id)arg3;

@end
