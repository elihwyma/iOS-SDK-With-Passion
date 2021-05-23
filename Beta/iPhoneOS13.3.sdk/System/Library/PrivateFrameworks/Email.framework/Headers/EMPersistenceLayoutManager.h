/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface EMPersistenceLayoutManager : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;
+ (id)mailAccountDirectory;
+ (id)mailDataDirectory;
+ (id)baseMailDirectoryPath;
+ (id)mailAccountDirectoryPath;
+ (id)mailDataDirectoryPath;
+ (id)_nonContainerizedBaseMailDirectoryPathCreated:(_Bool *)arg1;
+ (id)baseMailDirectory;

@end
