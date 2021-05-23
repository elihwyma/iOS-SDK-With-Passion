/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <GraphVisualizer/GVNode.h>

@class CIGVGraph, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CIGVNode : GVNode

{
    void *node;
    struct CGRect extent;
    struct CGSize titleSize;
    struct CGSize labelSize;
    struct CGSize imagesSize;
    struct CGSize roisSize;
    struct CGSize badgeSize;
    struct CGSize contentSize;
    NSMutableArray *images;
    NSMutableArray *rois;
    int color;
    int shape;
    CIGVGraph *graph;
    struct __CFString *title;
    struct __CFString *label;
}

@property (nonatomic) CIGVGraph *graph;
@property (readonly) void *node;
@property (readonly) struct CGRect extent;
@property (nonatomic) int shape;
@property (nonatomic) int color;
@property (nonatomic) struct __CFString *title;
@property (nonatomic, readonly) struct CGRect titleFrame;
@property (nonatomic, readonly) struct CGRect badgeFrame;
@property (nonatomic) struct __CFString *label;
@property (nonatomic, readonly) struct CGRect labelFrame;
@property (nonatomic, readonly) struct __CFArray *images;
@property (nonatomic, readonly) struct CGRect imagesFrame;
@property (nonatomic, readonly) struct __CFArray *rois;
@property (nonatomic, readonly) struct CGRect roisFrame;
@property (nonatomic, readonly) struct CGRect contentFrame;
@property (nonatomic, readonly) struct CGSize contentInsertSize;
@property (nonatomic, readonly) struct CGSize contentCornerSize;

+ (struct __CFDictionary *)textAttributesForTitle;
+ (struct __CFDictionary *)textAttributesForLabel;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)updateSize;
- (void)updateBadgeSize;
- (void)updateContentSize;
- (id)initWithCINode:(void *)arg1 extent:(struct CGRect)arg2;
- (void)addImage:(struct CGImage *)arg1;
- (void)addRoi:(struct CGRect)arg1;

@end
