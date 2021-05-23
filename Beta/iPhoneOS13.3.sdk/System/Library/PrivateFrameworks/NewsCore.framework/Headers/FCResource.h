/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCAssetHandle, FCInterestToken, NSString, NSURL, NTPBResourceRecord;

@interface FCResource : NSObject

{
    NSString *_resourceID;
    FCAssetHandle *_assetHandle;
    NTPBResourceRecord *_resourceRecord;
    FCInterestToken *_interestToken;
}

@property (retain, nonatomic) NTPBResourceRecord *resourceRecord;
@property (retain, nonatomic) FCInterestToken *interestToken;
@property (nonatomic, readonly) NSString *resourceID;
@property (nonatomic, readonly) FCAssetHandle *assetHandle;
@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly, getter=isOnDisk) _Bool onDisk;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResourceID:(id)arg1 assetHandle:(id)arg2;
- (id)initWithRecord:(id)arg1 interestToken:(id)arg2 assetManager:(id)arg3;
- (id)initWithPermanentURLForResourceID:(id)arg1 cacheLifetimeHint:(long long)arg2 contentContext:(id)arg3;

@end
