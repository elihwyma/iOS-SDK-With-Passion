/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <CoreFoundation/CFPDSource.h>

__attribute__((visibility("hidden")))
@interface CFPDContainerSource : CFPDSource

{
    struct __CFString *_containerPath;
}

- (id)initWithDomain:(struct __CFString *)arg1 userName:(struct __CFString *)arg2 container:(struct __CFString *)arg3 byHost:(_Bool)arg4 managed:(_Bool)arg5 shmemIndex:(short)arg6 daemon:(id)arg7;
- (struct __CFString *)container;

@end
