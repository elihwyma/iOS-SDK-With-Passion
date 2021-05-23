/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCAccessChecker.h>

@class FCPrivateChannelMembershipController;

@interface FCArticleDraftAccessChecker : FCAccessChecker

{
    FCPrivateChannelMembershipController *_privateChannelMembershipController;
}

@property (nonatomic, readonly) FCPrivateChannelMembershipController *privateChannelMembershipController;

- (id)init;
- (_Bool)hasAccessToItem:(id)arg1 blockedReason:(unsigned long long *)arg2 error:(id *)arg3;
- (_Bool)canSynchronouslyCheckAccessToItem:(id)arg1;
- (void)checkAccessToItem:(id)arg1 withQualityOfService:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)shouldShowAllDraftContent;
- (id)initWithPrivateChannelMembershipController:(id)arg1;

@end
