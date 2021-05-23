/*
 Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

#import <Foundation/NSObject.h>

@class CallDBMigrator;

@interface CHMigrator : NSObject

{
    CallDBMigrator *_migrator;
}

- (id)init;
- (void)migrate:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;

@end
