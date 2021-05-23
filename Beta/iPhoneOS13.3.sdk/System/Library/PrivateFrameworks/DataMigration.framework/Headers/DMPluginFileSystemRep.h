/*
 Image: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
 */

#import <Foundation/NSObject.h>

@class NSBundle, NSString;

@interface DMPluginFileSystemRep : NSObject

{
    NSString *_name;
    NSString *_path;
    NSBundle *_bundle;
    NSString *_bundleIdentifier;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) NSString *bundleIdentifier;

+ (id)allReps;

- (id)initWithName:(id)arg1 atEnclosingPath:(id)arg2;
- (_Bool)isBundleValid;

@end
