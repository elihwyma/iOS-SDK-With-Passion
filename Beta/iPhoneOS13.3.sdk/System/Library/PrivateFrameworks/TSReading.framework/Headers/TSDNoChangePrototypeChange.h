/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol TSSPropertySource;

@interface TSDNoChangePrototypeChange : NSObject

{
    id mPrototype;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) _Bool prototypeIsBeingReplaced;
@property (readonly) _Bool prototypeIsBeingModified;
@property (readonly) _Bool prototypeIsBeingDeleted;
@property (retain, readonly) id prototype;
@property (retain, readonly) id replacement;
@property (retain, readonly) id <TSSPropertySource> propertiesBeforeChange;
@property (retain, readonly) id <TSSPropertySource> propertiesAfterChange;

- (void)dealloc;
- (_Bool)propertyIsChanging:(int)arg1;
- (_Bool)propertiesAreChanging:(id)arg1;
- (id)changedPropertySet;
- (id)initNoChangePrototypeChangeForPrototype:(id)arg1;

@end
