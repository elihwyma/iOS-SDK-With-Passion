/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class HFItemManager, NSString, _HUQuickControlContentCharacteristicWriteQueuedUpdate;

@protocol HUQuickControlContentCharacteristicWritingDelegate;

@interface HUQuickControlContentCharacteristicWritingUpdateAdapter : NSObject

{
    _Bool _shouldIssueItemUpdatesOnCharacteristicOverrideValueChanges;
    id <HUQuickControlContentCharacteristicWritingDelegate> _forwardingCharacteristicWritingDelegate;
    HFItemManager *_itemManager;
    _HUQuickControlContentCharacteristicWriteQueuedUpdate *_queuedUpdate;
}

@property (retain, nonatomic) _HUQuickControlContentCharacteristicWriteQueuedUpdate *queuedUpdate;
@property (weak, nonatomic) id <HUQuickControlContentCharacteristicWritingDelegate> forwardingCharacteristicWritingDelegate;
@property (nonatomic) _Bool shouldIssueItemUpdatesOnCharacteristicOverrideValueChanges;
@property (nonatomic, readonly) HFItemManager *itemManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithItemManager:(id)arg1;
- (void)quickControlContent:(id)arg1 willBeginPossibleWritesForCharacteristics:(id)arg2;
- (void)quickControlContent:(id)arg1 didEndPossibleWritesForCharacteristics:(id)arg2;
- (void)quickControlContentDidUpdateCharacteristicValueOverrides:(id)arg1;
- (void)_executeQueuedUpdate;
- (id)_characteristicUpdateSuppressionReasonForContent:(id)arg1;

@end
