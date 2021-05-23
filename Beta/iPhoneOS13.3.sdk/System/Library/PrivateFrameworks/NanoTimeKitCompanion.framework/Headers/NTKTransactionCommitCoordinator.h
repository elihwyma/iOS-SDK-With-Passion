/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface NTKTransactionCommitCoordinator : NSObject

{
    NSMutableArray *_commitHandlers;
}

+ (id)_sharedInstance;
+ (_Bool)addTransactionCommitHandler:(CDUnknownBlockType)arg1;
+ (void)flushCommitHandlers;

- (id)init;
- (_Bool)_addTransactionCommitHandler:(CDUnknownBlockType)arg1;
- (void)_registerCATransactionCommitHandler;

@end
