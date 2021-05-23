/*
 Image: /System/Library/PrivateFrameworks/MDM.framework/MDM
 */

#import <MDM/MCSSRequestDelegate.h>

@class NSString, SSPersonalizeOffersRequest, SSPersonalizeOffersResponse;

@interface MCSSPersonalizeOffersDelegate : MCSSRequestDelegate

{
    SSPersonalizeOffersResponse *_response;
}

@property (retain, nonatomic, readonly) SSPersonalizeOffersRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)instanceWithItems:(id)arg1;

- (void)personalizeOffersRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)startCompletionBlock:(CDUnknownBlockType)arg1;

@end
