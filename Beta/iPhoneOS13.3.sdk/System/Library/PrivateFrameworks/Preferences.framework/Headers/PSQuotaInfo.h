/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface PSQuotaInfo : NSObject

{
    NSMutableDictionary *_mediaKindDict;
    unsigned long long _totalStorage;
    unsigned long long _usedStorage;
}

@property (nonatomic) unsigned long long totalStorage;
@property (nonatomic) unsigned long long usedStorage;

- (id)init;
- (void)setStorageInUse:(unsigned long long)arg1 forMediaKind:(long long)arg2;
- (unsigned long long)storageInUseForMediaKind:(long long)arg1;

@end
