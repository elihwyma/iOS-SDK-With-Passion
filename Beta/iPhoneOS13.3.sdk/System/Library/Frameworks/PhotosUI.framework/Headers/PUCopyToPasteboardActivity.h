/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UICopyToPasteboardActivity.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSString;

@protocol PXActivityItemSourceController;

__attribute__((visibility("hidden")))
@interface PUCopyToPasteboardActivity : UICopyToPasteboardActivity <Swift>

{
    id <PXActivityItemSourceController> _itemSourceController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <PXActivityItemSourceController> itemSourceController;

- (id)activityTitle;

@end
