/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class CKDPCSData;

__attribute__((visibility("hidden")))
@interface CKDPCSMemoryCacheEntry : NSObject

{
    CKDPCSData *_pcsData;
    double _lastAccess;
}

@property (retain, nonatomic) CKDPCSData *pcsData;
@property double lastAccess;

- (id)init;
- (id)description;
- (id)CKPropertiesDescription;

@end
