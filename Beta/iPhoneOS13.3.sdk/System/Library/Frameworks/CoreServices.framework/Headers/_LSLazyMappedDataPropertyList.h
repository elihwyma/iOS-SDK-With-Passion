/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/_LSLazyPropertyList.h>

@class NSData, _LSPlistHint;

__attribute__((visibility("hidden")))
@interface _LSLazyMappedDataPropertyList : _LSLazyPropertyList

{
    NSData *_plistData;
    _LSPlistHint *_plistHint;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)_getPropertyList:(id *)arg1;
- (_Bool)_getValue:(id *)arg1 forPropertyListKey:(id)arg2;
- (id)initWithPropertyListData:(id)arg1;
- (id)_plistHint;
- (id)objectsForPropertyListKeys:(id)arg1;

@end
