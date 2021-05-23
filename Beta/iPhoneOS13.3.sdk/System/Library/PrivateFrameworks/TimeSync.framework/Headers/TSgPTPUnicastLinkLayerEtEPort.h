/*
 Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface TSgPTPUnicastLinkLayerEtEPort

+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;
+ (id)iokitMatchingDictionaryForInterfaceName:(id)arg1 andMACAddress:(char *)arg2;

- (void)dealloc;
- (int)portType;
- (id)initWithService:(unsigned int)arg1;
- (id)initWithMatchingDictionary:(id)arg1;
- (id)_sourceAddressString;
- (id)_destinationAddressString;
- (id)initWithInterfaceName:(id)arg1 andMACAddress:(char *)arg2;

@end
