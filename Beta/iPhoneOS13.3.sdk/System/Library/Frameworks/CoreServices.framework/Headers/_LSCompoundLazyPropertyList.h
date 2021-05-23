/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/_LSLazyPropertyList.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _LSCompoundLazyPropertyList : _LSLazyPropertyList

{
    NSArray *_plists;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)_getPropertyList:(id *)arg1;
- (_Bool)_getValue:(id *)arg1 forPropertyListKey:(id)arg2;
- (id)initWithLazyPropertyLists:(id)arg1;

@end
