/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/_BRCOperation.h>

#import <CloudDocsDaemon/Swift-Protocol.h>

@class NSObject, NSString;

@protocol BROperationClient;

__attribute__((visibility("hidden")))
@interface _BRCFrameworkOperation : _BRCOperation <Swift>

{
    _Bool _startedFinish;
    _Bool _ignoreMissingRemoteClientProxy;
    NSObject<BROperationClient> *_remoteClientProxy;
}

@property (retain, nonatomic) NSObject<BROperationClient> *remoteClientProxy;
@property (nonatomic) _Bool ignoreMissingRemoteClientProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (oneway void)invalidate;
- (void)start;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)descriptionAdditionalStringWithContext:(id)arg1;

@end
