/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <Foundation/NSObject.h>

#import <CoreMediaStream/Swift-Protocol.h>

@class MSBackoffManager, NSMutableDictionary, NSString;

@interface MSCupidStateMachine : NSObject <Swift>

{
    NSString *_personID;
    NSString *_manifestPath;
    NSMutableDictionary *_userManifest;
    MSBackoffManager *_streamsBackoffManager;
    MSBackoffManager *_MMCSBackoffManager;
    _Bool _hasDeactivated;
}

@property (retain, nonatomic) NSMutableDictionary *_userManifest;
@property (nonatomic, readonly) NSString *personID;
@property (nonatomic) _Bool hasDeactivated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)deactivate;
- (void)_abort;
- (void)forget;
- (void)protocol:(id)arg1 didReceiveRetryAfterDate:(id)arg2;
- (void)_updateMasterManifest;
- (void)_forget;
- (id)initWithPersonID:(id)arg1;
- (void)_commitUserManifest;
- (void)_resetStreamsBackoffTimer;
- (void)_backoffStreamsBackoffTimer;
- (void)_didReceiveStreamsRetryAfterDate:(id)arg1;
- (void)_resetMMCSBackoffTimer;
- (void)_backoffMMCSBackoffTimer;
- (void)_didReceiveMMCSRetryAfterDate:(id)arg1;
- (id)_latestNextActivityDate;

@end
