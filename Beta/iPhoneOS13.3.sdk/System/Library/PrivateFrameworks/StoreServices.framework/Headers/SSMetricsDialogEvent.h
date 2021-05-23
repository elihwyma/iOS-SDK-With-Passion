/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSMetricsBaseEvent.h>

@class NSArray, NSDictionary, NSString;

@interface SSMetricsDialogEvent : SSMetricsBaseEvent

@property (copy, nonatomic) NSString *actionType;
@property (copy, nonatomic) NSString *actionURL;
@property (copy, nonatomic) NSDictionary *details;
@property (copy, nonatomic) NSString *dialogId;
@property (copy, nonatomic) NSString *dialogType;
@property (copy, nonatomic) NSString *dualAction;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *result;
@property (copy, nonatomic) NSString *targetId;
@property (copy, nonatomic) NSArray *userActions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;

@end
