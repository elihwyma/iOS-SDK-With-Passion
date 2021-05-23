/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSIndexPath, NSString, UIDragItem;

__attribute__((visibility("hidden")))
@interface _UITableViewDropItemImpl : NSObject

{
    UIDragItem *_dragItem;
    NSIndexPath *_sourceIndexPath;
    NSIndexPath *_translatedSourceIndexPath;
}

@property (retain, nonatomic) UIDragItem *dragItem;
@property (retain, nonatomic) NSIndexPath *sourceIndexPath;
@property (retain, nonatomic, getter=_translatedSourceIndexPath, setter=_setTranslatedSourceIndexPath:) NSIndexPath *translatedSourceIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct CGSize previewSize;

- (id)initWithDragItem:(id)arg1 sourceIndexPath:(id)arg2;
- (void)_translateSourceIndexPath:(CDUnknownBlockType)arg1;

@end
