/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class CKDAssetBatch, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDTransactionState : NSObject

{
    CKDAssetBatch *_assetBatch;
    NSMutableDictionary *_itemByAssetId;
}

@property (retain, nonatomic) CKDAssetBatch *assetBatch;
@property (retain, nonatomic) NSMutableDictionary *itemByAssetId;

- (id)init;

@end
