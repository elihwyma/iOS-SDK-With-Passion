/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNNode.h>

@class NSMutableDictionary, NSURL;

@interface SCNReferenceNode : SCNNode

{
    NSURL *_referenceURL;
    _Bool _loaded;
    NSMutableDictionary *_overrides;
    long long _loadingPolicy;
    NSURL *_catalogURL;
    NSURL *_sourceDocumentURL;
}

@property (copy, nonatomic) NSURL *referenceURL;
@property (nonatomic) long long loadingPolicy;
@property (readonly, getter=isLoaded) _Bool loaded;

+ (_Bool)supportsSecureCoding;
+ (id)referenceNodeWithURL:(id)arg1;

- (void)dealloc;
- (id)description;
- (void)load;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)unload;
- (id)_catalog;
- (void)setOverrides:(id)arg1;
- (id)overrides;
- (id)_resolveURL;
- (_Bool)_isNameUnique:(id)arg1;
- (void)_diffObject:(id)arg1 with:(id)arg2 path:(id)arg3;
- (void)_diffNode:(id)arg1 with:(id)arg2 path:(id)arg3;
- (void)removeAllOverrides;
- (id)_loadReferencedSceneWithURL:(id)arg1 catalog:(id)arg2;
- (void)_applyUnsharing:(id)arg1 alreadyShared:(id)arg2;
- (void)_applyOverride:(id)arg1 forKeyPath:(id)arg2;
- (void)_loadWithCatalog:(id)arg1;
- (void)_loadWithURL:(id)arg1 catalog:(id)arg2;
- (void)_applyOverrides;
- (void)collectOverrides;
- (void)addOverride:(id)arg1 forKeyPath:(id)arg2;
- (void)removeForKeyPath:(id)arg1;
- (void)setOverride:(id)arg1 forKeyPath:(id)arg2;
- (_Bool)_isAReference;
- (void)_loadWithURL:(id)arg1;

@end
