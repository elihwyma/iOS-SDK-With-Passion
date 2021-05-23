/*
 Image: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
 */

#import <UIKit/UIWindow.h>

@class NSArray, NSString, NSXPCConnection;

@interface CRSUIDashboardWidgetWindow : UIWindow

{
    NSXPCConnection *_dashboardWindowServiceConnection;
    NSArray *_focusableItems;
}

@property (retain, nonatomic) NSXPCConnection *dashboardWindowServiceConnection;
@property (retain, nonatomic) NSArray *focusableItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithWindowScene:(id)arg1;
- (void)_invalidateConnection;
- (void)hostFocusableItem:(id)arg1 pressed:(_Bool)arg2;
- (void)hostSelectedFocusableItem:(id)arg1;
- (void)hostFocusableItem:(id)arg1 focused:(_Bool)arg2;
- (void)_windowDidCreateContext:(id)arg1;
- (void)_invalidateCurrentFocusableItems;
- (id)_focusableItemForClientItem:(id)arg1;
- (id)_clientFocusableItemForItem:(id)arg1;
- (void)setFocusableViews:(id)arg1;

@end
