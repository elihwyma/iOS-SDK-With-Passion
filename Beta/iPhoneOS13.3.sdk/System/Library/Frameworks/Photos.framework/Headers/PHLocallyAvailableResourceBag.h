/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

#import <Photos/Swift-Protocol.h>

@class NSString;

@protocol PLAssetID, PLResourceDataStore, PLResourceDataStoreKey;

@interface PHLocallyAvailableResourceBag : NSObject <Swift>

{
    _Bool _keyIsHintBased;
    _Bool _isDegraded;
    _Bool _isPrimaryFormat;
    _Bool _isDefaultOrientation;
    id <PLAssetID> _assetID;
    id <PLResourceDataStore> _dataStore;
    id <PLResourceDataStoreKey> _dataStoreKey;
}

@property (retain, nonatomic) id <PLAssetID> assetID;
@property (retain, nonatomic) id <PLResourceDataStore> dataStore;
@property (retain, nonatomic) id <PLResourceDataStoreKey> dataStoreKey;
@property (nonatomic) _Bool keyIsHintBased;
@property (nonatomic) _Bool isDegraded;
@property (nonatomic) _Bool isPrimaryFormat;
@property (nonatomic) _Bool isDefaultOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)resourceURL;
- (void)prepareForReuse;
- (id)resourceData;

@end
