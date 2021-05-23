/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSString;

@interface SBIconListViewDraggingDataPolicyHandler : NSObject

{
    NSMapTable *_sourceURLsByOperationMapTable;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)openResourceOperation:(id)arg1 didFailWithError:(id)arg2;
- (void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (_Bool)allowsSpringLoadForSession:(id)arg1 onIconView:(id)arg2;
- (void)handleSpringLoadOnIconView:(id)arg1;
- (void)_removeAnySourceURLForOperation:(id)arg1;
- (id)_currentDraggingIconViewInView:(id)arg1 forLocation:(struct CGPoint)arg2;
- (id)_bestSupportedUTIForDragItem:(id)arg1 supportedTypes:(id)arg2;

@end
