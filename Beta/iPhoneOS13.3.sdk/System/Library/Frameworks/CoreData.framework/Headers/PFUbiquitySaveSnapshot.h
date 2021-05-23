/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface PFUbiquitySaveSnapshot : NSObject

{
    NSDate *_transactionDate;
    NSString *_modelVersionHash;
    NSString *_exportingPeerID;
    NSString *_localPeerID;
    NSMutableDictionary *_storeNameToStoreSaveSnapshots;
}

@property (retain, nonatomic) NSDate *transactionDate;
@property (nonatomic, readonly) NSString *modelVersionHash;
@property (nonatomic, readonly) NSString *exportingPeerID;
@property (nonatomic, readonly) NSArray *storeNames;
@property (nonatomic, readonly) NSString *localPeerID;

- (void)dealloc;
- (id)description;
- (id)storeSaveSnapshotForStoreName:(id)arg1;
- (id)initWithSaveNotification:(id)arg1 withLocalPeerID:(id)arg2;
- (id)storeSaveSnapshotForStore:(id)arg1;
- (id)initWithTransactionLog:(id)arg1;

@end
