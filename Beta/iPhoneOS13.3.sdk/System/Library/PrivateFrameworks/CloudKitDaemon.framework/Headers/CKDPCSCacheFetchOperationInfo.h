/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKit/CKDatabaseOperationInfo.h>

@class CKDPCSCache;

@protocol CKSQLiteItem;

__attribute__((visibility("hidden")))
@interface CKDPCSCacheFetchOperationInfo : CKDatabaseOperationInfo

{
    id <CKSQLiteItem> _itemID;
    CKDPCSCache *_cache;
    unsigned long long _options;
}

@property (retain, nonatomic) id <CKSQLiteItem> itemID;
@property (retain, nonatomic) CKDPCSCache *cache;
@property (nonatomic) unsigned long long options;

@end
