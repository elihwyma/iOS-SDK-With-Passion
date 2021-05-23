/*
 Image: /System/Library/PrivateFrameworks/MDM.framework/MDM
 */

#import <MDM/MCSSRequestDelegate.h>

@class NSString, SSPurchaseRequest;

@interface MCSSPurchaseRequestDelegate : MCSSRequestDelegate

@property (retain, nonatomic, readonly) SSPurchaseRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)instanceWithPurchases:(id)arg1;

- (void)startCompletionBlock:(CDUnknownBlockType)arg1;

@end
