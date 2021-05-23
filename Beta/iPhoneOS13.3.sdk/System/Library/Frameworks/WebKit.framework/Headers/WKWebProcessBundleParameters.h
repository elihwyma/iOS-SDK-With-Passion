/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WKWebProcessBundleParameters : NSObject

{
    struct RetainPtr<NSMutableDictionary> _parameters;
}

- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id).cxx_construct;
- (void)setParameter:(id)arg1 forKey:(id)arg2;
- (void)setParametersForKeyWithDictionary:(id)arg1;

@end
