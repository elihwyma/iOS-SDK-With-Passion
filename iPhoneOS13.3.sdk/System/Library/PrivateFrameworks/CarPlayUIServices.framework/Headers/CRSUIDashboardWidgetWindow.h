//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIWindow.h>

#import <CarPlayUIServices/CRSUIDashboardWidgetWindowClient-Protocol.h>

@class NSArray, NSXPCConnection;

@interface CRSUIDashboardWidgetWindow : UIWindow <CRSUIDashboardWidgetWindowClient>
{
    NSXPCConnection *_dashboardWindowServiceConnection;
    NSArray *_focusableItems;
}

@property(retain, nonatomic) NSArray *focusableItems; // @synthesize focusableItems=_focusableItems;
@property(retain, nonatomic) NSXPCConnection *dashboardWindowServiceConnection; // @synthesize dashboardWindowServiceConnection=_dashboardWindowServiceConnection;
// - (void).cxx_destruct;
- (void)_invalidateConnection;
- (void)_invalidateCurrentFocusableItems;
- (id)_clientFocusableItemForItem:(id)arg1;
- (id)_focusableItemForClientItem:(id)arg1;
- (void)hostSelectedFocusableItem:(id)arg1;
- (void)hostFocusableItem:(id)arg1 pressed:(BOOL)arg2;
- (void)hostFocusableItem:(id)arg1 focused:(BOOL)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)_windowDidCreateContext:(id)arg1;
- (void)setFocusableViews:(id)arg1;
- (void)dealloc;
- (id)initWithWindowScene:(id)arg1;

@end

