/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class INDefaultCardTemplate, INImage, INShortcut, NSArray, NSString;

@interface INRelevantShortcut : NSObject <Swift>

{
    NSArray *_relevanceProviders;
    INDefaultCardTemplate *_watchTemplate;
    long long _shortcutRole;
    INShortcut *_shortcut;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) INImage *_keyImage;
@property (copy, nonatomic) INShortcut *shortcut;
@property (copy, nonatomic) NSArray *relevanceProviders;
@property (copy, nonatomic) INDefaultCardTemplate *watchTemplate;
@property (nonatomic) long long shortcutRole;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
- (id)initWithShortcut:(id)arg1;

@end
