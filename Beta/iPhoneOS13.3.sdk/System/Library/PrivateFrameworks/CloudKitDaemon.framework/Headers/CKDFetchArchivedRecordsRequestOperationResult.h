/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface CKDFetchArchivedRecordsRequestOperationResult : NSObject

{
    NSData *_resultServerChangeTokenData;
    long long _status;
}

@property (retain, nonatomic) NSData *resultServerChangeTokenData;
@property (nonatomic) long long status;

- (id)init;

@end
