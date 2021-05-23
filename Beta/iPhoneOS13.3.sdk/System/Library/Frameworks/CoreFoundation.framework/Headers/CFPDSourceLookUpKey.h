/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CFPDSourceLookUpKey : NSObject

{
    struct __CFString *domain;
    struct __CFString *userName;
    struct __CFString *containerPath;
    struct __CFString *cloudPath;
    _Bool byHost;
    _Bool managed;
    _Bool managedUsesContainer;
    _Bool cloud;
}

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
