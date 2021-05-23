/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/_LSDBEnumerator.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface _LSApplicationProxyEnumerator : _LSDBEnumerator

{
    NSURL *_volumeURL;
    unsigned long long _options;
    vector_12da65de _bundleIdentifiers;
    unsigned int _container;
}

- (id)initWithVolumeURL:(id)arg1 options:(unsigned long long)arg2;
- (_Bool)_prepareWithContext:(struct LSContext *)arg1 error:(id *)arg2;
- (_Bool)_getObject:(id *)arg1 atIndex:(unsigned long long)arg2 context:(struct LSContext *)arg3;
- (id).cxx_construct;
- (_Bool)_getContainer:(unsigned int *)arg1 context:(struct LSContext *)arg2 error:(id *)arg3;
- (id)_applicationProxyWithContext:(struct LSContext *)arg1 bundleIdentifier:(unsigned int)arg2;
- (_Bool)_evaluateBundleNoIO:(unsigned int)arg1 data:(const struct LSBundleData *)arg2 context:(struct LSContext *)arg3;

@end
