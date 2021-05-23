/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDFetchNotificationChangesURLRequest : CKDURLRequest

{
    NSMutableArray *_resultChangedNotifications;
    _Bool _wantsChanges;
    _Bool _moreComing;
    unsigned long long _resultsLimit;
    NSData *_resultServerChangeTokenData;
    NSData *_serverChangeTokenData;
}

@property (retain, nonatomic) NSData *serverChangeTokenData;
@property (retain, nonatomic) NSData *resultServerChangeTokenData;
@property (nonatomic) _Bool moreComing;
@property (nonatomic) unsigned long long resultsLimit;
@property (nonatomic) _Bool wantsChanges;
@property (nonatomic, readonly) NSArray *resultChangedNotifications;

- (int)operationType;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)initWithServerChangeTokenData:(id)arg1;

@end
