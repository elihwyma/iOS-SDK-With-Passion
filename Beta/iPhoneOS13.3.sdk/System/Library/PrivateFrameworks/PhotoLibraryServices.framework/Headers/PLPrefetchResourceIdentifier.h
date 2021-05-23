/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSString;

@interface PLPrefetchResourceIdentifier : NSObject <Swift>

{
    unsigned int _version;
    NSString *_assetUuid;
    unsigned long long _cplType;
}

@property (nonatomic, readonly) NSString *assetUuid;
@property (nonatomic, readonly) unsigned int version;
@property (nonatomic, readonly) unsigned long long cplType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAssetUuid:(id)arg1 version:(unsigned int)arg2 cplType:(unsigned long long)arg3;

@end
