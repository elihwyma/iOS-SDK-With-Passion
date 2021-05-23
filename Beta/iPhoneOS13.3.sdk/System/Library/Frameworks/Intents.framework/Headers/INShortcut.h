/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class INImage, INIntent, NSArray, NSData, NSString, NSUserActivity;

@interface INShortcut : NSObject <Swift>

{
    NSData *_activityData;
    INIntent *_intent;
    NSUserActivity *_userActivity;
    INImage *_activityImage;
    NSString *_activitySubtitle;
    NSString *_activityBundleIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) INImage *_keyImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *writableTypeIdentifiersForItemProvider;
@property (copy, nonatomic, readonly) NSData *activityData;
@property (copy, nonatomic, readonly) INImage *activityImage;
@property (copy, nonatomic, readonly) NSString *activitySubtitle;
@property (copy, nonatomic, readonly) NSString *activityBundleIdentifier;
@property (nonatomic, readonly) NSString *_title;
@property (nonatomic, readonly) NSString *_subtitle;
@property (nonatomic, readonly) NSString *_associatedAppBundleIdentifier;
@property (copy, nonatomic, readonly) INIntent *intent;
@property (nonatomic, readonly) NSUserActivity *userActivity;

+ (_Bool)supportsSecureCoding;
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
+ (id)writableTypeIdentifiersForItemProvider;
+ (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)arg1;
+ (id)readableTypeIdentifiersForItemProvider;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
- (id)_initWithIntent:(id)arg1;
- (id)initWithIntent:(id)arg1;
- (id)initWithUserActivity:(id)arg1;
- (id)initWithUserActivity:(id)arg1 bundleIdentifier:(id)arg2;
- (id)initWithActivityData:(id)arg1 activityImage:(id)arg2 activitySubtitle:(id)arg3 activityBundleIdentifier:(id)arg4;
- (id)shortcutWithActivityImage:(id)arg1;
- (id)shortcutWithActivityBundleIdentifier:(id)arg1;

@end
