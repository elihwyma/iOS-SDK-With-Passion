/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray, NSOperationQueue, NSString, RTCReporting;

@protocol OS_dispatch_queue;

@interface MPRTCReportingSession : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSDictionary *_additionalUserInfo;
    NSString *_clientName;
    int _clientType;
    long long _clientVersion;
    _Bool _hasCompleteSessionSetup;
    _Bool _hasInitializedSession;
    id _hierarchyToken;
    RTCReporting *_internalSession;
    NSOperationQueue *_operationQueue;
    NSMutableArray *_pendingReportingEvents;
    NSString *_serviceIdentifier;
    unsigned int _sessionID;
    NSDictionary *_sessionUserInfo;
}

@property (copy, nonatomic) NSDictionary *additionalUserInfo;
@property (copy, nonatomic) NSString *clientName;
@property (nonatomic) int clientType;
@property (nonatomic) long long clientVersion;
@property (copy, nonatomic) NSString *serviceIdentifier;
@property (retain, nonatomic) id hierarchyToken;
@property (nonatomic) unsigned int sessionID;
@property (nonatomic, readonly) _Bool hasCompleteSessionSetup;
@property (nonatomic, readonly) _Bool hasInitializedSession;

+ (void)_recordEvent:(id)arg1 withInternalSession:(id)arg2;
+ (_Bool)_isRTCReportingSupported;
+ (id)newHierarchyTokenFromParentToken:(id)arg1;

- (id)init;
- (void)initializeSession;
- (void)completeSessionSetup;
- (void)finalizeSession;
- (void)recordEvent:(id)arg1;

@end
