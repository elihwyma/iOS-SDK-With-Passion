/*
 Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

#import <Foundation/NSObject.h>

@class IMOneTimeCodeUtilities, NSArray, NSTimer;

@protocol IMDaemonListenerProtocol;

@interface IMDOneTimeCodeManager : NSObject

{
    NSArray *_validCodes;
    NSTimer *_codeInvalidationTimer;
    id <IMDaemonListenerProtocol> _broadcaster;
    id <IMDaemonListenerProtocol> _broadcasterOverride;
    IMOneTimeCodeUtilities *_otcUtilities;
}

@property (retain, nonatomic) NSArray *validCodes;
@property (retain, nonatomic) NSTimer *codeInvalidationTimer;
@property (retain, nonatomic) id <IMDaemonListenerProtocol> broadcaster;
@property (retain, nonatomic) id <IMDaemonListenerProtocol> broadcasterOverride;
@property (retain, nonatomic) IMOneTimeCodeUtilities *otcUtilities;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)consumeCodeWithGuid:(id)arg1;
- (id)initWithBroadcaster:(id)arg1 otcUtilities:(id)arg2;
- (void)_setNewCodeAndPrepareInvalidationTimer:(id)arg1;
- (void)broadcastCodeStatusToClients;
- (void)startTrackingCode:(id)arg1;

@end
