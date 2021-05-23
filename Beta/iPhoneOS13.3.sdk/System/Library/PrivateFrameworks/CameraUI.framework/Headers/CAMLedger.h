/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@interface CAMLedger : NSObject

{
    struct ledger_entry_info *_ledgerEntries;
    long long _ledgerCount;
    int _footprintLedgerIndex;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (long long)footprint;

@end
