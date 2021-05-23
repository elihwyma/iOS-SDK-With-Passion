/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSKeyedUnarchiver.h>

@interface NSKeyedUnarchiver (WFFileCoder)

+ (void)wf_securelyUnarchiveObjectWithData:(id)arg1 allowedClasses:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

- (id)wf_unarchiveRootObjectAndFinishWithAllowedClasses:(id)arg1;

@end
