/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

#import <CloudDocsDaemon/Swift-Protocol.h>

@class BRCItemID, BRCZoneRowID;

__attribute__((visibility("hidden")))
@interface BRCItemGlobalID : NSObject <Swift>

{
    BRCZoneRowID *_zoneRowID;
    BRCItemID *_itemID;
}

@property (nonatomic, readonly) BRCZoneRowID *zoneRowID;
@property (nonatomic, readonly) BRCItemID *itemID;

+ (id)itemGlobalIDFromLocalItem:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToItemGlobalID:(id)arg1;
- (id)initWithZoneRowID:(id)arg1 itemID:(id)arg2;

@end
