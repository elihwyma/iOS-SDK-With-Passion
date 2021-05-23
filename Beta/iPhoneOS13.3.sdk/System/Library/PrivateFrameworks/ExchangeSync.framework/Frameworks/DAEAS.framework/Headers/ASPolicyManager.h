/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <Foundation/NSObject.h>

@protocol ASPolicyManagerDelegate;

@interface ASPolicyManager : NSObject

{
    _Bool _updatingPolicy;
    id <ASPolicyManagerDelegate> _delegate;
}

@property (nonatomic) _Bool updatingPolicy;
@property (weak, nonatomic) id <ASPolicyManagerDelegate> delegate;

- (id)initWithAccount:(id)arg1;
- (id)currentPolicyKey;
- (void)requestPolicyUpdate;
- (void)policyKeyChanged:(id)arg1;
- (void)policyFailedToUpdate;

@end
