/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

#import <RelevanceEngine/Swift-Protocol.h>

@class NSArray, NSString, REContent, REElementAction;

@interface REElement : NSObject <Swift>

{
    NSString *_bundleIdentifier;
    NSString *_identifier;
    unsigned long long _privacyBehavior;
    REContent *_content;
    REContent *_idealizedContent;
    NSArray *_relevanceProviders;
    REElementAction *_action;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned long long privacyBehavior;
@property (nonatomic, readonly) REContent *content;
@property (nonatomic, readonly) REContent *idealizedContent;
@property (nonatomic, readonly) NSArray *relevanceProviders;
@property (nonatomic, readonly) REElementAction *action;

+ (id)_supportedDictionaryEncodingKeys;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)bundleIdentifier;
- (void)setBundleIdentifier:(id)arg1;
- (id)shallowCopy;
- (void)_updateIdentifier:(id)arg1;
- (id)copyElementWithUpdatedRelevanceProviders:(id)arg1;
- (void)finalizeContent;
- (id)initWithDictionary:(id)arg1 relevanceProviderGenerator:(id)arg2;
- (id)dictionaryEncodingWithRelevanceProviderGenerator:(id)arg1;
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 action:(id)arg3 relevanceProviders:(id)arg4 privacyBehavior:(unsigned long long)arg5;
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 idealizedContent:(id)arg3 action:(id)arg4 relevanceProviders:(id)arg5 privacyBehavior:(unsigned long long)arg6;
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 action:(id)arg3 relevanceProviders:(id)arg4;
- (_Bool)_relevanceProvidersEqualToElement:(id)arg1;
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 idealizedContent:(id)arg3 action:(id)arg4 relevanceProviders:(id)arg5;
- (_Bool)isNoContentElement;

@end
