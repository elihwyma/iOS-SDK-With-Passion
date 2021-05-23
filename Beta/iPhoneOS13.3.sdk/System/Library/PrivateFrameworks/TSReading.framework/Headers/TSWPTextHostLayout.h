/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDDrawableLayout.h>

@class NSString, TSWPShapeInfo, TSWPShapeLayout;

@interface TSWPTextHostLayout : TSDDrawableLayout

{
    TSWPShapeInfo *_editingShapeInfo;
    TSWPShapeLayout *_editingShapeLayout;
}

@property (nonatomic, readonly) TSWPShapeLayout *editingShapeLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) TSWPShapeInfo *editingShape;

- (void)dealloc;
- (void)updateChildrenFromInfo;

@end
