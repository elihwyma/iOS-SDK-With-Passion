/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h>

@class NSURL;

@protocol QLPreviewItem;

@interface QLEditedItem : NSObject

{
    id <QLPreviewItem> _item;
    NSURL *_editedFileURL;
}

@property (copy, nonatomic) id <QLPreviewItem> item;
@property (copy, nonatomic) NSURL *editedFileURL;

- (id)initWithItem:(id)arg1 editedFileURL:(id)arg2;

@end
