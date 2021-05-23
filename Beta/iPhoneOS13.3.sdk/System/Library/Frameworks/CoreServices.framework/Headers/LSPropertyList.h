/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class _LSLazyPropertyList;

__attribute__((visibility("hidden")))
@interface LSPropertyList : NSObject

{
    _LSLazyPropertyList *_lazyPropertyList;
}

@property (retain) _LSLazyPropertyList *lazyPropertyList;

+ (id)new;

- (id)init;
- (id)objectForKey:(id)arg1 ofClass:(Class)arg2;
- (id)_initWithLazyPropertyList:(id)arg1;
- (id)objectsForKeys:(id)arg1;
- (id)objectForKey:(id)arg1 ofClass:(Class)arg2 valuesOfClass:(Class)arg3;

@end
