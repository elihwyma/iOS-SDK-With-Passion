/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface PPABHelper : NSObject

{
    NSString *_abGroupIdentifier;
    NSDictionary *_abGroupContents;
    NSString *_naturalABGroupIdentifier;
    NSArray *_abGroupsInAsset;
}

@property (nonatomic, readonly) NSString *naturalABGroupIdentifier;
@property (nonatomic, readonly) NSArray *abGroupsInAsset;
@property (nonatomic, readonly) NSString *abGroupIdentifier;
@property (nonatomic, readonly) NSDictionary *abGroupContents;

+ (void)initialize;
+ (void)setDefaultDeviceIndexPolicy;
+ (unsigned char)indexForDevice;
+ (unsigned long long)cachedSaltedIndex:(unsigned long long)arg1;
+ (unsigned long long)saltedIndex:(unsigned long long)arg1;
+ (void)setIndexForDevice:(CDUnknownBlockType)arg1;
+ (unsigned long long)randomSaltedIndex:(unsigned long long)arg1;
+ (unsigned long long)incrementalSaltedIndex:(unsigned long long)arg1;
+ (void)setStaticIndexForDevice:(unsigned char)arg1;
+ (unsigned long long)cachedSalt;
+ (id)ppDeviceId;

- (id)init;
- (id)initWithAssetContents:(id)arg1 specifiedABGroup:(id)arg2 indexForDevice:(unsigned char)arg3;
- (_Bool)setABGroupIdentifier:(id)arg1 assetContents:(id)arg2;

@end
