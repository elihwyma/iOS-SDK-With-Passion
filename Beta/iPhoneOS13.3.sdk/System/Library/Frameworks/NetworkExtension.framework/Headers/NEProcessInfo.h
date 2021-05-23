/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@interface NEProcessInfo : NSObject

+ (void)initGlobals;
+ (id)copyUUIDForSingleArch:(int)arg1;
+ (id)copyUUIDsForFatBinary:(int)arg1;
+ (id)copyUUIDsFromExecutable:(const char *)arg1;
+ (id)copyUUIDsForExecutable:(id)arg1;
+ (id)copyUUIDsForBundleID:(id)arg1 uid:(unsigned int)arg2;
+ (void)clearUUIDCache;
+ (id)getApplicationNameFromPlugin:(id)arg1 userUID:(unsigned int)arg2;
+ (id)copyDNSUUIDs;
+ (id)copyNEHelperUUIDs;
+ (_Bool)is64bitCapable;

- (id)init;

@end
