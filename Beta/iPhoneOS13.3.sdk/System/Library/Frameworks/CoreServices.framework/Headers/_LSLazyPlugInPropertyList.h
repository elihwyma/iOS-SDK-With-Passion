/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/_LSLazyPropertyList.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _LSLazyPlugInPropertyList : _LSLazyPropertyList

{
    _LSLazyPropertyList *_infoPlist;
    _LSLazyPropertyList *_sdkPlist;
    NSDictionary *_mergedPlist;
    struct os_unfair_lock_s _mergeLock;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInfoPlist:(id)arg1 SDKPlist:(id)arg2;
- (_Bool)_getPropertyList:(id *)arg1;
- (_Bool)_getValue:(id *)arg1 forPropertyListKey:(id)arg2;

@end
