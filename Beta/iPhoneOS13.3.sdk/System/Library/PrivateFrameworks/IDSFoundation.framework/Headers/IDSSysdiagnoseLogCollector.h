/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@interface IDSSysdiagnoseLogCollector : NSObject

+ (id)sharedInstance;

- (id)init;
- (void)collectSysdiagnoseLog:(CDUnknownBlockType)arg1;
- (void)_collectSysdiagnoseLog:(CDUnknownBlockType)arg1;

@end
