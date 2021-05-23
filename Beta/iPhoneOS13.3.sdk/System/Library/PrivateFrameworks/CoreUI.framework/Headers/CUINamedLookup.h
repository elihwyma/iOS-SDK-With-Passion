/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <Foundation/NSObject.h>

@class CUIRenditionKey, CUIThemeRendition, NSString;

@interface CUINamedLookup : NSObject

{
    NSString *_name;
    CUIRenditionKey *_key;
    NSString *_signature;
    unsigned long long _storageRef;
    unsigned int _distilledInVersion;
    struct os_unfair_lock_s _lock;
    unsigned int _odContent:1;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) CUIRenditionKey *key;
@property (nonatomic) unsigned long long storageRef;
@property (nonatomic, readonly) CUIThemeRendition *_rendition;
@property (nonatomic, readonly) CUIRenditionKey *renditionKey;
@property (nonatomic, readonly) NSString *renditionName;
@property (nonatomic, readonly) NSString *keySignature;
@property (nonatomic, readonly) _Bool _cacheRenditionProperties;
@property (nonatomic, readonly) unsigned int _distilledInVersion;
@property (nonatomic, readonly) unsigned long long subtype;
@property (nonatomic, readonly) long long sizeClassHorizontal;
@property (nonatomic, readonly) long long sizeClassVertical;
@property (nonatomic, readonly) long long memoryClass;
@property (nonatomic, readonly) long long graphicsClass;
@property (nonatomic, readonly) long long appearanceIdentifier;
@property (nonatomic, readonly) _Bool representsOnDemandContent;
@property (nonatomic, readonly) long long idiom;
@property (nonatomic, readonly) long long displayGamut;
@property (nonatomic, readonly) long long layoutDirection;
@property (nonatomic, readonly) NSString *appearance;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)lock;
- (void)unlock;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3;
- (_Bool)isTintable;
- (id)_renditionForSpecificKey:(id)arg1;
- (void)setRepresentsOnDemandContent:(_Bool)arg1;

@end
