/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSObject.h>

@class CXCallDirectoryStore;

@interface CXCallDirectoryStoreMigrator : NSObject

{
    CXCallDirectoryStore *_store;
    CDUnknownBlockType _storeCreationBlock;
    CDUnknownBlockType _retrieveExtensionBlock;
}

@property (retain, nonatomic) CXCallDirectoryStore *store;
@property (copy, nonatomic) CDUnknownBlockType storeCreationBlock;
@property (copy, nonatomic) CDUnknownBlockType retrieveExtensionBlock;

- (id)init;
- (id)_performMigrationsStartingAtSchemaVersion:(long long)arg1 error:(id *)arg2;
- (id)performMigrationsWithError:(id *)arg1;

@end
