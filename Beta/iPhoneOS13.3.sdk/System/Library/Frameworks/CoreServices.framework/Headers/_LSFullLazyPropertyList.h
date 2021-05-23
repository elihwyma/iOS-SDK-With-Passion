/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/_LSLazyPropertyList.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _LSFullLazyPropertyList : _LSLazyPropertyList

{
    NSDictionary *_plist;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertyList:(id)arg1;
- (_Bool)_getPropertyList:(id *)arg1;
- (_Bool)_getValue:(id *)arg1 forPropertyListKey:(id)arg2;

@end
