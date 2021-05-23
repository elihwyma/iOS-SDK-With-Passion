/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class MPIdentifierSet, NSMutableDictionary, NSString;

@interface MPModelObject : NSObject <Swift>

{
    MPIdentifierSet *_originalIdentifierSet;
    NSMutableDictionary *_storage;
    _Bool _isFinalized;
    MPIdentifierSet *_identifiers;
}

@property (nonatomic, readonly) struct MPLibraryAddStatusObserverConfiguration libraryAddStatusObserverConfiguration;
@property (nonatomic, readonly) long long libraryRemovalSupportedOptions;
@property (nonatomic, readonly) MPIdentifierSet *originalIdentifierSet;
@property (nonatomic, readonly) NSString *humanDescription;
@property (copy, nonatomic, readonly) MPIdentifierSet *identifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (_Bool)resolveInstanceMethod:(SEL)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)classesForSecureCoding;
+ (_Bool)supportsLibraryAddStatusObservation;
+ (id)requiredLibraryAddStatusObservationProperties;
+ (void)performWithoutEnforcement:(CDUnknownBlockType)arg1;
+ (void)_indexProperties;
+ (_Bool)_lookupPropertyForSelector:(SEL)arg1 result:(CDUnknownBlockType)arg2;
+ (id)_modelKeyForPropertySelector:(SEL)arg1;
+ (id)requiredLibraryRemovalProperties;
+ (_Bool)supportsLibraryRemoval;
+ (id)requiredKeepLocalStatusObservationProperties;
+ (_Bool)supportsKeepLocalStatusObservation;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)_stateDumpObject;
- (id)contentItemCollectionInfo;
- (id)mediaItemPropertyValues;
- (void)setValue:(id)arg1 forModelKey:(id)arg2;
- (id)valueForModelKey:(id)arg1;
- (id)initWithIdentifiers:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)copyWithIdentifiers:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)hasLoadedValueForKey:(id)arg1;
- (_Bool)hasLoadedValuesForPropertySet:(id)arg1;
- (_Bool)_isModelKey:(id)arg1;
- (id)newKeepLocalStatusObserverConfiguration;

@end
