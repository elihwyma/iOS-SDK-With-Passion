/*
 Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

#import <Foundation/NSObject.h>

@class NSError, NSString, NSURL, SAConnectionPolicy, SAConnectionPolicyRoute;

@interface SiriCoreSiriConnectionInfo : NSObject

{
    _Bool _prefersWWAN;
    _Bool _skipPeer;
    _Bool _useWiFiHint;
    _Bool _forceReconnect;
    _Bool _imposePolicyBan;
    _Bool _requiresURLSession;
    _Bool _enableSiriServerLogging;
    NSURL *_url;
    SAConnectionPolicyRoute *_connectionPolicyRoute;
    NSString *_aceHost;
    NSString *_languageCode;
    NSError *_skipPeerErrorReason;
    double _timeout;
    NSString *_assistantIdentifier;
    NSString *_peerAssistantIdentifier;
    NSString *_connectionId;
    SAConnectionPolicy *_connectionPolicy;
}

@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) SAConnectionPolicyRoute *connectionPolicyRoute;
@property (copy, nonatomic) NSString *aceHost;
@property (copy, nonatomic) NSString *languageCode;
@property (nonatomic) _Bool prefersWWAN;
@property (nonatomic) _Bool skipPeer;
@property (nonatomic) _Bool useWiFiHint;
@property (copy, nonatomic) NSError *skipPeerErrorReason;
@property (nonatomic) _Bool forceReconnect;
@property (nonatomic) double timeout;
@property (copy, nonatomic) NSString *assistantIdentifier;
@property (copy, nonatomic) NSString *peerAssistantIdentifier;
@property (copy, nonatomic) NSString *connectionId;
@property (nonatomic) _Bool imposePolicyBan;
@property (nonatomic) _Bool requiresURLSession;
@property (copy, nonatomic) SAConnectionPolicy *connectionPolicy;
@property (nonatomic, getter=isSiriServerLoggingEnabled) _Bool enableSiriServerLogging;

- (id)description;
- (void)_appendPotentiallyNilString:(id)arg1 toMutableString:(id)arg2;

@end
