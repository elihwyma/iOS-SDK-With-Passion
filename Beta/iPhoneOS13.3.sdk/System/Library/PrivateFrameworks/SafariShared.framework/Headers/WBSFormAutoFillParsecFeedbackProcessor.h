/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSString, WBSCrowdsourcedFeedbackDomainNormalizer;

@protocol OS_dispatch_queue, WBSFormAutoFillFeedbackDomainPolicyProvider, WBSParsecGlobalFeedbackDispatcher;

@interface WBSFormAutoFillParsecFeedbackProcessor : NSObject

{
    id <WBSParsecGlobalFeedbackDispatcher> _globalFeedbackDispatcher;
    unsigned long long _autoFillVersion;
    WBSCrowdsourcedFeedbackDomainNormalizer *_domainNormalizer;
    NSObject<OS_dispatch_queue> *_internalQueue;
    id <WBSFormAutoFillFeedbackDomainPolicyProvider> _domainPolicyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) id <WBSFormAutoFillFeedbackDomainPolicyProvider> domainPolicyProvider;

- (id)init;
- (void)sendFeedbackWithCorrectionSet:(id)arg1;
- (void)_getFeedbackWithCorrectionSet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_feedbackWithCorrectionSet:(id)arg1 includeOrigin:(_Bool)arg2;
- (id)initWithGlobalFeedbackDispatcher:(id)arg1 domainPolicyProvider:(id)arg2 autoFillVersion:(unsigned long long)arg3;

@end
