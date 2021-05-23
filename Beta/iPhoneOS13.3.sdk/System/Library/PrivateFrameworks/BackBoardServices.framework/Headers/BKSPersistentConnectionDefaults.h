/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <BaseBoard/BSAbstractDefaultDomain.h>

@class NSString;

@interface BKSPersistentConnectionDefaults : BSAbstractDefaultDomain

@property (nonatomic) int forceDemoMaxHBI;
@property (retain, nonatomic) NSString *wifiInterfaceName;

- (id)init;
- (void)_bindAndRegisterDefaults;

@end
