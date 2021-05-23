/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class BRCStageRegistry, CKPackage, NSString;

__attribute__((visibility("hidden")))
@interface BRCLazyPackage : NSObject

{
    BRCStageRegistry *_registry;
    NSString *_stageID;
    NSString *_name;
    CKPackage *_package;
}

- (unsigned long long)itemCount;
- (_Bool)addItem:(id)arg1 error:(id *)arg2;
- (id)initWithRegistry:(id)arg1 stageID:(id)arg2 name:(id)arg3;
- (id)closeAndReturn;

@end
