/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <IDS/IDSService.h>

@interface IDSService (MSPExtras)

+ (id)_msp_IDSIdentifierFor:(id)arg1;
+ (id)_msp_IDSIdentifiersFor:(id)arg1;

- (id)_msp_currentAccount;
- (id)_msp_removeSelfFrom:(id)arg1;
- (id)_msp_accountFromIdentifier:(id)arg1;
- (_Bool)_msp_hasValidIDSAccount;
- (id)_msp_currentAccountIdentifier;

@end
