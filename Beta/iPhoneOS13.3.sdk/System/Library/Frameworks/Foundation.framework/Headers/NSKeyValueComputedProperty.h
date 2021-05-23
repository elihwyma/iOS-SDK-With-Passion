/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSKeyValueProperty.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSKeyValueComputedProperty : NSKeyValueProperty

{
    NSString *_operationName;
    NSString *_operationArgumentKeyPath;
    NSKeyValueProperty *_operationArgumentProperty;
}

- (void)dealloc;
- (id)description;
- (void)object:(id)arg1 didAddObservance:(id)arg2 recurse:(_Bool)arg3;
- (void)object:(id)arg1 didRemoveObservance:(id)arg2 recurse:(_Bool)arg3;
- (_Bool)matchesWithoutOperatorComponentsKeyPath:(id)arg1;
- (_Bool)object:(id)arg1 withObservance:(id)arg2 willChangeValueForKeyOrKeys:(id)arg3 recurse:(_Bool)arg4 forwardingValues:(CDStruct_a70f6672 *)arg5;
- (void)object:(id)arg1 withObservance:(id)arg2 didChangeValueForKeyOrKeys:(id)arg3 recurse:(_Bool)arg4 forwardingValues:(CDStruct_a70f6672)arg5;
- (Class)_isaForAutonotifying;
- (id)_keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(_Bool *)arg2;
- (id)_keyPathIfAffectedByValueForMemberOfKeys:(id)arg1;
- (id)_initWithContainerClass:(id)arg1 keyPath:(id)arg2 propertiesBeingInitialized:(struct __CFSet *)arg3;
- (void)_givenPropertiesBeingInitialized:(struct __CFSet *)arg1 getAffectingProperties:(id)arg2;
- (void)_addDependentValueKey:(id)arg1;

@end
