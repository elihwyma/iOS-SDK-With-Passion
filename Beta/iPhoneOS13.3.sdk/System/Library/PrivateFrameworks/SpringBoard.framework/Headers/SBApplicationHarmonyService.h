/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBApplicationHarmonyService : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)applicationServer:(id)arg1 client:(id)arg2 fetchWhitePointAdaptivityStyleForDisplayId:(unsigned int)arg3 withCompletion:(CDUnknownBlockType)arg4;

@end
