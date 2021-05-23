/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSMutableData, NSString, NSURL, NSURLRequest, NSURLResponse, NSUUID, NWPathEvaluator;

@protocol OS_dispatch_queue;

@interface NEFilterSource : NSObject

{
    _Bool _registered;
    _Bool _expectRemediation;
    int _sourceAppPid;
    unsigned int _controlUnit;
    long long _status;
    NSURL *_url;
    long long _direction;
    unsigned long long _socketIdentifier;
    NSString *_sourceAppIdentifier;
    NSMutableData *_pendingData;
    NWPathEvaluator *_evaluator;
    NSUUID *_flowUUID;
    unsigned long long _lastPendingDataStartIndex;
    unsigned long long _lastSendDataLength;
    unsigned long long _pendingDataStartIndex;
    unsigned long long _peekIndex;
    unsigned long long _passLength;
    NSURLResponse *_currentResponse;
    NSURLRequest *_currentRequest;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_urlAppendString;
    NSString *_remediationURL;
    NSString *_remediationButtonText;
    NSString *_organization;
    NSURL *_parentURL;
    struct ne_filter_globals *_globals;
    unsigned long long _byteInboundCount;
    unsigned long long _byteOutboundCount;
}

@property _Bool registered;
@property (retain) NSMutableData *pendingData;
@property (retain) NWPathEvaluator *evaluator;
@property (retain) NSUUID *flowUUID;
@property unsigned long long lastPendingDataStartIndex;
@property unsigned long long lastSendDataLength;
@property unsigned long long pendingDataStartIndex;
@property unsigned long long peekIndex;
@property unsigned long long passLength;
@property (retain) NSURLResponse *currentResponse;
@property (retain) NSURLRequest *currentRequest;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSString *urlAppendString;
@property (retain) NSString *remediationURL;
@property (retain) NSString *remediationButtonText;
@property (retain) NSString *organization;
@property _Bool expectRemediation;
@property (retain) NSURL *parentURL;
@property (retain) NSURL *url;
@property unsigned int controlUnit;
@property (readonly) struct ne_filter_globals *globals;
@property unsigned long long byteInboundCount;
@property unsigned long long byteOutboundCount;
@property (readonly) long long status;
@property (readonly) long long direction;
@property (readonly) unsigned long long socketIdentifier;
@property (copy) NSString *sourceAppIdentifier;
@property int sourceAppPid;

+ (_Bool)filterRequired;

- (void)initGlobals;
- (id)initWithDecisionQueue:(id)arg1;
- (void)willSendRequest:(id)arg1 decisionHandler:(CDUnknownBlockType)arg2;
- (void)receivedResponse:(id)arg1 decisionHandler:(CDUnknownBlockType)arg2;
- (void)receivedData:(id)arg1 decisionHandler:(CDUnknownBlockType)arg2;
- (void)finishedLoadingWithDecisionHandler:(CDUnknownBlockType)arg1;
- (void)remediateWithDecisionHandler:(CDUnknownBlockType)arg1;
- (_Bool)generateCryptoSignature:(unsigned char [32])arg1 length:(unsigned int *)arg2;
- (void)connectToFilterUnit:(unsigned int)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)prepareAgentForURL:(id)arg1 urlRequest:(id)arg2 urlResponse:(id)arg3 parentURL:(id)arg4 direction:(long long)arg5 flowUUID:(id)arg6 handler:(CDUnknownBlockType)arg7;
- (_Bool)sendDataToPluginWithConnection:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)mergeURLString:(id)arg1 withAppendString:(id)arg2;
- (id)replacementData;
- (void)prepareAgentWithHandler:(CDUnknownBlockType)arg1;
- (id)filterOptions;
- (void)prepareAgentForRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)prepareAgentForResponse:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithURL:(id)arg1 direction:(long long)arg2 socketIdentifier:(unsigned long long)arg3;
- (void)addData:(id)arg1 withCompletionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dataCompleteWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithParentURL:(id)arg1 decisionQueue:(id)arg2;

@end
