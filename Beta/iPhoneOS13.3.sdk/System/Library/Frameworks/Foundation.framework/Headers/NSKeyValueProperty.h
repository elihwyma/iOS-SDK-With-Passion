/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@class NSKeyValueContainerClass, NSString;

__attribute__((visibility("hidden")))
@interface NSKeyValueProperty : NSObject <Swift>

{
    NSKeyValueContainerClass *_containerClass;
    NSString *_keyPath;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)keyPath;
- (id)dependentValueKeyOrKeysIsASet:(_Bool *)arg1;
- (void)object:(id)arg1 didAddObservance:(id)arg2 recurse:(_Bool)arg3;
- (Class)isaForAutonotifying;
- (void)object:(id)arg1 didRemoveObservance:(id)arg2 recurse:(_Bool)arg3;
- (id)restOfKeyPathIfContainedByValueForKeyPath:(id)arg1;
- (_Bool)matchesWithoutOperatorComponentsKeyPath:(id)arg1;
- (id)keyPathIfAffectedByValueForMemberOfKeys:(id)arg1;
- (id)keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(_Bool *)arg2;
- (_Bool)object:(id)arg1 withObservance:(id)arg2 willChangeValueForKeyOrKeys:(id)arg3 recurse:(_Bool)arg4 forwardingValues:(CDStruct_a70f6672 *)arg5;
- (void)object:(id)arg1 withObservance:(id)arg2 didChangeValueForKeyOrKeys:(id)arg3 recurse:(_Bool)arg4 forwardingValues:(CDStruct_a70f6672)arg5;
- (id)_initWithContainerClass:(id)arg1 keyPath:(id)arg2 propertiesBeingInitialized:(struct __CFSet *)arg3;

@end
