/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface EDPersonaPersistenceLayoutManager : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;
+ (id)baseAccountDirectoryForPersonaIdentifier:(id)arg1;
+ (id)iOS_baseAccountDirectoryForPersonaIdentifier:(id)arg1;
+ (id)macOS_baseAccountDirectoryForPersonaIdentifier:(id)arg1;

@end
