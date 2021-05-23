/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSEntityDescription, NSPropertyDescription;

__attribute__((visibility("hidden")))
@interface _NSPropertyDescriptionProxy : NSObject

{
    id _sourceBuffer;
    NSPropertyDescription *_underlyingProperty;
    NSEntityDescription *_entityDescription;
    unsigned int _entitysReferenceIDForProperty;
}

+ (_Bool)resolveInstanceMethod:(SEL)arg1;
+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (Class)class;
- (_Bool)isKindOfClass:(Class)arg1;
- (id)description;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)entity;
- (unsigned int)_entitysReferenceID;
- (id)_underlyingProperty;
- (void)_createCachesAndOptimizeState;
- (void)_versionHash:(char *)arg1 inStyle:(unsigned long long)arg2;
- (void)_setEntity:(id)arg1;
- (void)_setEntityAndMaintainIndices:(id)arg1;
- (void)_setEntitysReferenceID:(unsigned int)arg1;
- (id)initWithPropertyDescription:(id)arg1;

@end
