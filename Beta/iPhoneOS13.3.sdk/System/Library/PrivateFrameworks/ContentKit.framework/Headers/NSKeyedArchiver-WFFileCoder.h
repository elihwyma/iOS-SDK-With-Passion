/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSKeyedArchiver.h>

@interface NSKeyedArchiver (WFFileCoder)

+ (id)wf_securelyArchivedDataWithRootObject:(id)arg1 fileCoder:(id)arg2;
+ (id)wf_securelyArchivedDataWithRootObject:(id)arg1;
+ (id)wf_securelyArchivedDataWithRootObject:(id)arg1 deletionResponsibility:(long long)arg2;

@end
