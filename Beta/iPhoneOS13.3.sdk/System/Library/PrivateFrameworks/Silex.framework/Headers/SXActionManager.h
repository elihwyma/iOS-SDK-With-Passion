/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXActionManagerPreview;

@protocol SXActionActivityManager, SXActionViewManager;

@interface SXActionManager : NSObject

{
    id <SXActionActivityManager> _activityManager;
    id <SXActionViewManager> _viewManager;
    SXActionManagerPreview *_currentPreview;
}

@property (nonatomic, readonly) id <SXActionActivityManager> activityManager;
@property (nonatomic, readonly) id <SXActionViewManager> viewManager;
@property (retain, nonatomic) SXActionManagerPreview *currentPreview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)commitPreviewViewController:(id)arg1;
- (void)performAction:(id)arg1 postActionHandlers:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4 mode:(unsigned long long)arg5;
- (id)previewViewControllerForAction:(id)arg1;
- (void)notifyPostActionHandlers:(id)arg1 action:(id)arg2 state:(unsigned long long)arg3;
- (void)performAction:(id)arg1 postActionHandlers:(id)arg2;
- (id)contextMenuConfigurationForAction:(id)arg1;
- (id)initWithActionActivityManager:(id)arg1 viewManager:(id)arg2;

@end
