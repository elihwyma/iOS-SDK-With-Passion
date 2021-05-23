/*
 Image: /System/Library/PrivateFrameworks/AXCoreUtilities.framework/AXCoreUtilities
 */

#import <Foundation/NSError.h>

@interface NSError (AXExtensions)

+ (id)ax_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 arguments:(char *)arg4;
+ (id)ax_errorWithDomain:(id)arg1 description:(id)arg2;
+ (id)ax_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;

- (id)ax_nonRedundantDescription;

@end
