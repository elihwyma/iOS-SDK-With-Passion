/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NSBoundKeyPath : NSObject

{
    id _rootObject;
    NSString *_keyPath;
}

@property id rootObject;
@property (readonly) NSString *keyPath;

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)newKeyPathWithRootObject:(id)arg1 keyPathString:(id)arg2;
+ (id)keyPathWithRootObject:(id)arg1 path:(const char *)arg2;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)value;
- (void)setValue:(id)arg1;
- (_Bool)validateValue:(inout id *)arg1 error:(out id *)arg2;
- (id)mutableArrayValue;
- (id)mutableOrderedSetValue;
- (id)mutableSetValue;

@end
