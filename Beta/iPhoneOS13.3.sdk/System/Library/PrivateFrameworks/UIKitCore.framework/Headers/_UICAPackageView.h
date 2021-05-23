/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class CAPackage, NSArray;

@interface _UICAPackageView : UIView

{
    CAPackage *_package;
    NSArray *_rootViews;
}

+ (_Bool)_shouldCatchDecodingExceptions;
+ (id)_newViewHierarchyFrom:(id)arg1 publishedObjectViewClassMap:(id)arg2 into:(id)arg3;
+ (void)loadPackageViewWithObject:(id)arg1 publishedObjectViewClassMap:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)loadPackageViewWithData:(id)arg1 publishedObjectViewClassMap:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)loadPackageViewWithContentsOfURL:(id)arg1 publishedObjectViewClassMap:(id)arg2 completion:(CDUnknownBlockType)arg3;

- (id)initWithData:(id)arg1 publishedObjectViewClassMap:(id)arg2;
- (id)publishedObjectWithName:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 publishedObjectViewClassMap:(id)arg2;
- (id)publishedViewWithName:(id)arg1;

@end
