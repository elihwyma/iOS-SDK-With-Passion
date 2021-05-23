/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/_LSDBEnumerator.h>

__attribute__((visibility("hidden")))
@interface _LSExtensionPointEnumerator : _LSDBEnumerator

{
    struct vector<const LSExtensionPointData *, std::__1::allocator<const LSExtensionPointData *>> _extensionDatas;
}

- (_Bool)_prepareWithContext:(struct LSContext *)arg1 error:(id *)arg2;
- (_Bool)_getObject:(id *)arg1 atIndex:(unsigned long long)arg2 context:(struct LSContext *)arg3;
- (id).cxx_construct;

@end
