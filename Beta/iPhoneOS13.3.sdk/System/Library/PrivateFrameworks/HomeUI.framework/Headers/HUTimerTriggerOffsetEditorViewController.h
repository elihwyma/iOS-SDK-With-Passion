/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableViewController.h>

@class NSDateComponents, NSString;

@protocol HUTimerTriggerOffsetEditorDelegate;

@interface HUTimerTriggerOffsetEditorViewController : HUItemTableViewController

{
    NSString *_significantEvent;
    NSDateComponents *_currentOffset;
    id <HUTimerTriggerOffsetEditorDelegate> _delegate;
    NSDateComponents *_selectedOffset;
}

@property (retain, nonatomic) NSDateComponents *selectedOffset;
@property (nonatomic, readonly) NSString *significantEvent;
@property (nonatomic, readonly) NSDateComponents *currentOffset;
@property (weak, nonatomic) id <HUTimerTriggerOffsetEditorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (void)_cancel:(id)arg1;
- (void)_done:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (id)initWithSignificantEvent:(id)arg1 currentOffset:(id)arg2 delegate:(id)arg3;
- (void)significantEventOffsetPicker:(id)arg1 didSelectOffset:(id)arg2;

@end
