/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class UIViewController;

@protocol PXRelatedEntry;

@interface _PXUIRelatedPreviewOrbContext : NSObject

{
    UIViewController *_previewViewController;
    id <PXRelatedEntry> _relatedEntry;
}

@property (retain, nonatomic) UIViewController *previewViewController;
@property (retain, nonatomic) id <PXRelatedEntry> relatedEntry;

@end
