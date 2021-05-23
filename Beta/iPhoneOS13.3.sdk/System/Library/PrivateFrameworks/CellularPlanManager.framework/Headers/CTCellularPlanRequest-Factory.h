/*
 Image: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
 */

#import <CellularPlanManager/CTCellularPlanRequest.h>

@interface CTCellularPlanRequest (Factory)

+ (void)load;
+ (id)loadPlansRequestWithUrl:(id)arg1 postData:(id)arg2;
+ (id)createSessionRequest;
+ (id)plansRequestWithSignIdMap:(id)arg1 renewalIccid:(id)arg2 urls:(id)arg3;
+ (id)subscriptionDetailsRequestWithIccids:(id)arg1 signIdMap:(id)arg2 urls:(id)arg3;
+ (id)requestHandoffTokenWithSignIdMap:(id)arg1 urls:(id)arg2;
+ (id)newInitiatePurchaseWithSessionId:(id)arg1 planId:(id)arg2;
+ (id)newPurchaseWithSessionId:(id)arg1 receipt:(id)arg2 userId:(id)arg3 userName:(id)arg4;

@end
