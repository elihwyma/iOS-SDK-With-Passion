/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class CKDAssetZoneKey, NSMutableDictionary, NSMutableOrderedSet;

__attribute__((visibility("hidden")))
@interface CKDAssetZone : NSObject

{
    CKDAssetZoneKey *_assetZoneKey;
    NSMutableOrderedSet *_assetRecords;
    NSMutableDictionary *_assetRecordsByRecordID;
}

@property (retain, nonatomic) NSMutableOrderedSet *assetRecords;
@property (retain, nonatomic) NSMutableDictionary *assetRecordsByRecordID;
@property (retain, nonatomic) CKDAssetZoneKey *assetZoneKey;

- (id)description;
- (id)CKPropertiesDescription;
- (void)addMMCSItem:(id)arg1;
- (void)addRereferencedMMCSItem:(id)arg1;
- (void)addMMCSSectionItem:(id)arg1;
- (id)initWithAssetZoneKey:(id)arg1;

@end
