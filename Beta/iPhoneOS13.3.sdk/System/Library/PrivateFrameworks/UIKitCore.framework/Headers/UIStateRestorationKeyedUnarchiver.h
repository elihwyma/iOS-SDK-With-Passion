/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSKeyedUnarchiver.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface UIStateRestorationKeyedUnarchiver : NSKeyedUnarchiver

{
    NSDictionary *_defaultValues;
}

- (void)dealloc;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (id)decodeObjectForKey:(id)arg1;
- (id)decodeTopLevelObjectOfClasses:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (id)initForReadingWithData:(id)arg1 defaultValues:(id)arg2 requiresSecureCoding:(_Bool)arg3;

@end
