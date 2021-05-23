/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface CKDFetchZoneChangesRequestOperationResult : NSObject

{
    _Bool _hasPendingArchivedRecords;
    NSData *_resultServerChangeTokenData;
    NSData *_resultClientChangeTokenData;
    long long _status;
}

@property (retain, nonatomic) NSData *resultServerChangeTokenData;
@property (retain, nonatomic) NSData *resultClientChangeTokenData;
@property (nonatomic) long long status;
@property (nonatomic) _Bool hasPendingArchivedRecords;

- (id)init;

@end
