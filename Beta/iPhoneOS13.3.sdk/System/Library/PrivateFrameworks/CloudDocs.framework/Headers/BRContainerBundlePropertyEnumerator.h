/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <Foundation/NSEnumerator.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface BRContainerBundlePropertyEnumerator : NSEnumerator

{
    NSDictionary *_plist;
    NSEnumerator *_enumerator;
    NSString *_propertyKey;
    Class _valueClass;
}

- (id)nextObject;
- (id)initWithContainerPlist:(id)arg1 propertyKey:(id)arg2 valuesOfClass:(Class)arg3;

@end
