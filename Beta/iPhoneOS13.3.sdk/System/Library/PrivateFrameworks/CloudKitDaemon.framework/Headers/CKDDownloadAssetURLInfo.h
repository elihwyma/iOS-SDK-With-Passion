/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class CKAsset;

__attribute__((visibility("hidden")))
@interface CKDDownloadAssetURLInfo : NSObject

{
    CKAsset *_asset;
    struct _OpaquePCSShareProtection *_recordPCS;
}

@property (retain, nonatomic) CKAsset *asset;
@property (nonatomic) struct _OpaquePCSShareProtection *recordPCS;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
