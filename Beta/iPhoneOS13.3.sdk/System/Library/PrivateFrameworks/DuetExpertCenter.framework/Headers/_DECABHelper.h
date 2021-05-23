/*
 Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface _DECABHelper : NSObject

{
    NSString *_groupIdentifier;
    NSDictionary *_abGroupContents;
}

@property (nonatomic, readonly) NSString *groupIdentifier;
@property (nonatomic, readonly) NSDictionary *abGroupContents;

+ (void)initialize;
+ (void)setDefaultDeviceIndexPolicy;
+ (unsigned char)indexForDevice;
+ (unsigned long long)cachedSaltedIndex:(unsigned long long)arg1;
+ (unsigned long long)saltedIndex:(unsigned long long)arg1;
+ (id)decDeviceId;
+ (void)setIndexForDevice:(CDUnknownBlockType)arg1;
+ (unsigned long long)randomSaltedIndex:(unsigned long long)arg1;
+ (unsigned long long)incrementalSaltedIndex:(unsigned long long)arg1;
+ (void)setStaticIndexForDevice:(unsigned char)arg1;

- (id)init;
- (id)initWithAssetContents:(id)arg1 indexForDevice:(unsigned char)arg2;
- (id)initWithAssetContents:(id)arg1 specifiedABGroup:(id)arg2 indexForDevice:(unsigned char)arg3;
- (id)initWithAssetsForResource:(id)arg1 ofType:(id)arg2 specifiedABGroup:(id)arg3;
- (id)initWithAssetContents:(id)arg1;
- (id)initWithAssetsForResource:(id)arg1 ofType:(id)arg2;

@end
