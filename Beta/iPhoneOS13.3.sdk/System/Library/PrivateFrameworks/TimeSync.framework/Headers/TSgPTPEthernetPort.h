/*
 Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface TSgPTPEthernetPort

+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;
+ (id)iokitMatchingDictionaryForInterfaceName:(id)arg1;

- (void)dealloc;
- (int)portType;
- (id)initWithInterfaceName:(id)arg1;
- (id)initWithService:(unsigned int)arg1;
- (id)initWithMatchingDictionary:(id)arg1;
- (id)_sourceAddressString;
- (id)_destinationAddressString;

@end
