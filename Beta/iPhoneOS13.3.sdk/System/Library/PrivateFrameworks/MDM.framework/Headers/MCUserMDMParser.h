/*
 Image: /System/Library/PrivateFrameworks/MDM.framework/MDM
 */

#import <MDM/MCMDMParser.h>

@interface MCUserMDMParser : MCMDMParser

- (id)_allCommands;
- (id)_profileList:(id)arg1;
- (id)_installProfile:(id)arg1 accessRights:(int)arg2;
- (id)_removeProfile:(id)arg1;
- (id)_restrictions:(id)arg1;
- (id)_allowedDeviceQueriesForAccessRights:(int)arg1;
- (void)_performQuery:(id)arg1 withResultDictionary:(id)arg2;

@end
