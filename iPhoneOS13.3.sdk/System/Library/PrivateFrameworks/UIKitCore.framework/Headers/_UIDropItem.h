//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIDragItem.h"

@class NSItemProvider;

__attribute__((visibility("hidden")))
@interface _UIDropItem : UIDragItem
{
    UIDragItem *_localDragItem;
    NSItemProvider *_dropItemProvider;
}

@property(retain, nonatomic, getter=_dropItemProvider, setter=_setDropItemProvider:) NSItemProvider *dropItemProvider; // @synthesize dropItemProvider=_dropItemProvider;
@property(retain, nonatomic, getter=_localDragItem, setter=_setLocalDragItem:) UIDragItem *localDragItem; // @synthesize localDragItem=_localDragItem;
// - (void).cxx_destruct;
- (void)_setPrivateLocalContext:(id)arg1;
- (id)_privateLocalContext;
- (void)setLocalObject:(id)arg1;
- (id)localObject;
- (id)itemProvider;

@end

