/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/Swift-Protocol.h>

@protocol TSSPropertySource;

@protocol TSDPrototypeChange <Swift>

@property (readonly) _Bool prototypeIsBeingReplaced;
@property (readonly) _Bool prototypeIsBeingModified;
@property (readonly) _Bool prototypeIsBeingDeleted;
@property (retain, readonly) id prototype;
@property (retain, readonly) id replacement;
@property (retain, readonly) id <TSSPropertySource> propertiesBeforeChange;
@property (retain, readonly) id <TSSPropertySource> propertiesAfterChange;

- (unsigned short)propertyIsChanging: /* Error: Ran out of types for this method. */;
- (unsigned short)propertiesAreChanging: /* Error: Ran out of types for this method. */;

@end
