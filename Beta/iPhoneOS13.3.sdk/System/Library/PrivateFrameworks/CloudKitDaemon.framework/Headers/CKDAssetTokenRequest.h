/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableSet;

__attribute__((visibility("hidden")))
@interface CKDAssetTokenRequest : NSObject

{
    unsigned int _size;
    unsigned int _sizeUpperBound;
    NSMutableArray *_assetBatches;
    NSMutableSet *_failedAssetBatches;
}

@property (retain, nonatomic) NSMutableArray *assetBatches;
@property (retain, nonatomic) NSMutableSet *failedAssetBatches;
@property (nonatomic) unsigned int sizeUpperBound;
@property (nonatomic) unsigned int size;

- (id)init;
- (id)description;
- (_Bool)isEmpty;
- (id)CKPropertiesDescription;
- (void)addAssetBatch:(id)arg1;
- (void)addFailedBatch:(id)arg1;
- (_Bool)hasSuccessfulBatches;
- (id)successfulBatches;

@end
