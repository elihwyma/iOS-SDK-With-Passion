/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSExtension, NSSet, NSString, _MXExtensionProvider;

@interface _MXExtension : NSObject

{
    NSString *_identifier;
    _MXExtensionProvider *_provider;
}

@property (nonatomic, readonly) NSExtension *extension;
@property (weak, nonatomic) _MXExtensionProvider *provider;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic, readonly) unsigned long long type;
@property (copy, nonatomic, readonly) NSString *extensionPointIdentifier;
@property (copy, nonatomic, readonly) NSDictionary *attributes;
@property (copy, nonatomic, readonly) NSDictionary *infoDictionary;
@property (copy, nonatomic, readonly) NSSet *capabilities;
@property (nonatomic, readonly, getter=isEnabled) _Bool enabled;
@property (copy, nonatomic, readonly) NSString *displayName;
@property (copy, nonatomic, readonly) NSString *containingAppDisplayName;

+ (_Bool)shouldDeserializeCacheItems;
+ (void)setShouldDeserializeCacheItems:(_Bool)arg1;

- (id)description;
- (id)startSendingUpdatesForIntent:(id)arg1 toObserver:(id)arg2;
- (id)resolveIntentSlot:(id)arg1 forIntent:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)canSupportIntentClass:(Class)arg1;
- (id)_containingAppIdentifer;
- (_Bool)_setEnabled:(_Bool)arg1 error:(id *)arg2;
- (id)handleRequest:(id)arg1 requestDispatcher:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)startSendingUpdatesForRequest:(id)arg1 requestDispatcher:(id)arg2 toObserver:(id)arg3;
- (id)_iconWithFormat:(int)arg1;
- (id)initWithExtensionIdentifier:(id)arg1 extensionProvider:(id)arg2;
- (id)confirmIntent:(id)arg1 expectResponseClass:(Class)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)handleIntent:(id)arg1 expectResponseClass:(Class)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (_Bool)_isMapsExtension;
- (_Bool)_isIntentExtension;
- (id)siblingExtensions;
- (id)_iconForTableUI;
- (_Bool)canSupportIntent:(id)arg1;
- (void)startExtensionServiceWithInputItems:(id)arg1 begin:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_loadCacheItems:(id)arg1;

@end
