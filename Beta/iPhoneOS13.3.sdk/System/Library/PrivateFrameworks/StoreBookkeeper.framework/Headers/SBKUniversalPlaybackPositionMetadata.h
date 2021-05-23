/*
 Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBKUniversalPlaybackPositionMetadata : NSObject

{
    _Bool _hasBeenPlayed;
    NSString *_itemIdentifier;
    double _timestamp;
    double _bookmarkTime;
    unsigned long long _playCount;
}

@property (copy) NSString *itemIdentifier;
@property double timestamp;
@property double bookmarkTime;
@property _Bool hasBeenPlayed;
@property unsigned long long playCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)keyValueStoreItemIdentifierForUniqueStoreID:(long long)arg1 itemTitle:(id)arg2 albumName:(id)arg3 itemArtistName:(id)arg4 feedURL:(id)arg5 feedGUID:(id)arg6;
+ (id)metadataWithItemIdentifier:(id)arg1 bookmarkTime:(double)arg2 bookmarkTimestamp:(double)arg3 hasBeenPlayed:(_Bool)arg4 playCount:(unsigned long long)arg5;
+ (id)pairWithKVSKey:(id)arg1 kvsPayload:(id)arg2;
+ (id)metadataWithItemIdentifier:(id)arg1 keyValueStorePayload:(id)arg2 failuresOkay:(_Bool)arg3;
+ (id)keyValueStoreItemIdentifierForItem:(id)arg1;
+ (id)_testableMetadataItem_1;
+ (id)metadataWithValuesFromDataSourceItem:(id)arg1;
+ (id)metadataWithItemIdentifier:(id)arg1 keyValueStorePayload:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)kvsKey;
- (id)kvsPayload;
- (id)kvsValueDescription;
- (id)initAsTestableItem;
- (id)keyValueStorePayload;

@end
