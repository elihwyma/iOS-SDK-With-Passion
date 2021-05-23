/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class CKRecordID, NSArray, NSMutableDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface CKDAssetRecord : NSObject

{
    NSString *_recordType;
    CKRecordID *_recordID;
    NSMutableDictionary *_itemsByRecordKey;
    NSMutableDictionary *_rereferencedItemsByRecordKey;
    NSMutableDictionary *_sectionItemsByRecordKey;
    NSNumber *_sizeUpperBoundNumber;
    NSNumber *_rerefSizeUpperBoundNumber;
}

@property (retain, nonatomic) NSMutableDictionary *itemsByRecordKey;
@property (retain, nonatomic) NSMutableDictionary *rereferencedItemsByRecordKey;
@property (retain, nonatomic) NSMutableDictionary *sectionItemsByRecordKey;
@property (retain, nonatomic) NSNumber *sizeUpperBoundNumber;
@property (retain, nonatomic) NSNumber *rerefSizeUpperBoundNumber;
@property (nonatomic, readonly) NSString *recordType;
@property (nonatomic, readonly) CKRecordID *recordID;
@property (readonly) unsigned int sizeUpperBound;
@property (readonly) unsigned int rerefSizeUpperBound;
@property (nonatomic, readonly) NSArray *allMMCSItems;
@property (nonatomic, readonly) NSArray *allMMCSSectionItems;

- (id)description;
- (_Bool)isEmpty;
- (id)initWithRecordType:(id)arg1 recordID:(id)arg2;
- (id)CKPropertiesDescription;
- (_Bool)isPackageSectionRecord;
- (id)allRecordKeys;
- (void)addMMCSItem:(id)arg1;
- (void)addRereferencedMMCSItem:(id)arg1;
- (void)addMMCSSectionItem:(id)arg1;
- (id)allRereferenceMMCSItems;
- (id)allMMCSAndSectionItems;
- (id)allRegularAndSectionAndRereferenceItemsWithRecordKey:(id)arg1;
- (id)allRegularAndSectionAndRereferenceItems;
- (id)firstMMCSItemError;
- (id)firstMMCSSectionItemError;
- (_Bool)isAssetRecord;
- (_Bool)isEmptyOfRereferencesAssets;

@end
