/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <AccountsUI/ACUIDataclassActionPicker.h>

@class NSString;

@interface AAUIDataclassMergeActionPicker : ACUIDataclassActionPicker

{
    _Bool _isPerformingBatchMerge;
    _Bool _isTetheredSyncingEnabled;
    _Bool _isAnotherAccountSyncingDataclass;
    _Bool _isDataclassSyncingUsingExchangeOnly;
    _Bool _localStoreHasReadOnlyCalendars;
    NSString *_tetheredSyncingSource;
}

@property (nonatomic, setter=setPerformingBatchMerge:) _Bool isPerformingBatchMerge;
@property (nonatomic, setter=setTetheredSyncingEnabled:) _Bool isTetheredSyncingEnabled;
@property (nonatomic, setter=setAnotherAccountIsSyncingDataclass:) _Bool isAnotherAccountSyncingDataclass;
@property (nonatomic, setter=setDataclassIsSyncingUsingExchangeOnly:) _Bool isDataclassSyncingUsingExchangeOnly;
@property (nonatomic) _Bool localStoreHasReadOnlyCalendars;
@property (nonatomic) NSString *tetheredSyncingSource;

- (id)title;
- (id)message;
- (id)descriptionForDataclassAction:(id)arg1;

@end
