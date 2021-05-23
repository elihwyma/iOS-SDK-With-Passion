/*
 Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface PCPersistentIdentifiers : NSObject

+ (id)processNameAndPidIdentifier;
+ (unsigned long long)hostUniqueIdentifier;
+ (id)processNamePidAndStringIdentifier:(id)arg1;
+ (int)pidFromMatchingIdentifer:(id)arg1;
+ (id)_processNamePrefix;

@end
