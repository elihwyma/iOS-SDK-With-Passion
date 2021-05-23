/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface CKPackageDBDelegate : NSObject

@property (nonatomic, readonly) int userVersion;

- (_Bool)migrateDatabase:(id)arg1 fromVersion:(int)arg2;

@end
