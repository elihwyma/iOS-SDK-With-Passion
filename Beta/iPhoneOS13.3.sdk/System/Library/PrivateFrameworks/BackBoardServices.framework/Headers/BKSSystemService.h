/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

@class FBSSystemService;

@interface BKSSystemService : NSObject

{
    FBSSystemService *_fbsSystemService;
}

- (id)init;
- (void)openApplication:(id)arg1 options:(id)arg2 withResult:(CDUnknownBlockType)arg3;
- (_Bool)canOpenApplication:(id)arg1 reason:(int *)arg2;
- (void)openApplication:(id)arg1 options:(id)arg2 clientPort:(unsigned int)arg3 withResult:(CDUnknownBlockType)arg4;
- (unsigned int)createClientPort;
- (void)cleanupClientPort:(unsigned int)arg1;
- (int)pidForApplication:(id)arg1;
- (id)systemApplicationBundleIdentifier;
- (void)terminateApplication:(id)arg1 forReason:(int)arg2 andReport:(_Bool)arg3 withDescription:(id)arg4;
- (void)terminateApplicationGroup:(int)arg1 forReason:(int)arg2 andReport:(_Bool)arg3 withDescription:(id)arg4;
- (void)openURL:(id)arg1 application:(id)arg2 options:(id)arg3 clientPort:(unsigned int)arg4 withResult:(CDUnknownBlockType)arg5;

@end
