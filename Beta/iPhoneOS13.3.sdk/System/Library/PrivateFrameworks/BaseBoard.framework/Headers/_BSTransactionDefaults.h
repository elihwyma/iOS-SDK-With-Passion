/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <BaseBoard/BSAbstractDefaultDomain.h>

@interface _BSTransactionDefaults : BSAbstractDefaultDomain

@property (nonatomic, getter=isAuditHistoryEnabled) _Bool auditHistoryEnabled;

+ (id)sharedInstance;

- (void)_bindAndRegisterDefaults;

@end
