/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WBSFormAutoFillParsecDomainPolicyProvider : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_correctionsStore;
- (void)autoFillFeedbackProcessor:(id)arg1 determineWhetherToSendFeedbackForDomain:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)setPoliciesWithJSONData:(id)arg1 retrievalURLString:(id)arg2;
- (void)getLastPolicyRetrievalURLStringWithResultHandler:(CDUnknownBlockType)arg1;

@end
