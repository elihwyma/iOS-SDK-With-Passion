/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString, SBAppLayout;

@interface SBFluidSwitcherAppLayoutHeaderItemController : NSObject

{
    SBAppLayout *_appLayout;
    NSArray *_displayItems;
    NSMutableDictionary *_displayItemToIcon;
    NSMutableDictionary *_displayItemToLoadedImage;
    NSMutableDictionary *_displayItemToSceneHandle;
    _Bool _invalidated;
    _Bool _useDarkLabels;
    CDUnknownBlockType _updateHandler;
}

@property (nonatomic, getter=isUsingDarkLabels) _Bool useDarkLabels;
@property (copy, nonatomic) CDUnknownBlockType updateHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void)iconImageDidUpdate:(id)arg1;
- (void)sceneHandle:(id)arg1 didChangeSceneTitle:(id)arg2;
- (id)initWithAppLayout:(id)arg1 applicationSceneHandleProvider:(id)arg2 showCanvasTitles:(_Bool)arg3;
- (void)_updateDisplayItemIcons;
- (void)_performUpdateHandler;
- (void)_loadIconForDisplayItem:(id)arg1;
- (id)_computeHeaderItems;
- (id)_iconForDisplayItem:(id)arg1;

@end
