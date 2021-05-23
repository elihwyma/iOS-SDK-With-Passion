/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCMultiAccessChecker.h>

@class FCPrivateChannelMembershipController;

@protocol FCPaidAccessCheckerType;

@interface FCArticleAccessChecker : FCMultiAccessChecker

{
    id <FCPaidAccessCheckerType> _paidAccessChecker;
    FCPrivateChannelMembershipController *_privateChannelMembershipController;
}

@property (nonatomic, readonly) id <FCPaidAccessCheckerType> paidAccessChecker;
@property (nonatomic, readonly) FCPrivateChannelMembershipController *privateChannelMembershipController;

- (id)init;
- (id)initWithPaidAccessChecker:(id)arg1 privateChannelMembershipController:(id)arg2;
- (id)initWithAccessCheckers:(id)arg1;

@end
