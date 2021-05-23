/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FPItemToURLResourcesConverter : NSObject

{
    NSMutableDictionary *_gettersByURLKey;
    NSMutableDictionary *_typesByURLKey;
}

- (void)_addHelperMethodsToClass:(Class)arg1;
- (void)_cacheImplementedPropertiesForClass:(Class)arg1;
- (void)_addMethod:(SEL)arg1 toClass:(Class)arg2;
- (id)initWithItemClass:(Class)arg1;
- (id)_dictionaryFromItem:(id)arg1 requestedKeys:(id)arg2;

@end
