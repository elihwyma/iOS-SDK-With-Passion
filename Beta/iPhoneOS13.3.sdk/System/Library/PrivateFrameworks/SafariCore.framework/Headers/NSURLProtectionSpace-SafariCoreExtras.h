/*
 Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

#import <CFNetwork/NSURLProtectionSpace.h>

@interface NSURLProtectionSpace (SafariCoreExtras)

@property (nonatomic, readonly) struct __CFString *safari_protocolAsSecAttrProtocolValue;

+ (id)safari_HTMLFormProtectionSpaceForURL:(id)arg1;

- (id)safari_addressString;
- (id)safari_creationDateOfCredentialWithUser:(id)arg1;
- (id)safari_protectionSpaceByReplacingHostWithHighlevelDomain;
- (long long)safari_compareToHighLevelDomainFromProtectionSpace:(id)arg1;
- (long long)safari_compareToHighLevelDomainFromProtectionSpaceOrderingDecimalCharactersLast:(id)arg1;
- (id)safari_URL;
- (_Bool)safari_allowsCredentialSaving;

@end
