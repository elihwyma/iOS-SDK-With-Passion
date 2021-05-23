/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class BRFieldCKInfo;

__attribute__((visibility("hidden")))
@interface BRCSideCarInfo : NSObject

{
    BRFieldCKInfo *_ckInfo;
    long long _favoriteRank;
    long long _lastUsedTime;
}

@property (retain, nonatomic) BRFieldCKInfo *ckInfo;
@property (nonatomic) long long lastUsedTime;
@property (nonatomic) long long favoriteRank;

- (id)description;
- (id)debugDescription;
- (id)descriptionWithContext:(id)arg1;
- (_Bool)hasfieldsToSync;

@end
