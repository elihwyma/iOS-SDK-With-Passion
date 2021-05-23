/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OADProperties : NSObject

{
    OADProperties *mParent;
    unsigned int mIsMerged:1;
    unsigned int mIsMergedWithParent:1;
}

+ (id)defaultProperties;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)parent;
- (void)setParent:(id)arg1;
- (id)initWithDefaults;
- (void)flatten;
- (_Bool)isMergedPropertyForSelector:(SEL)arg1;
- (id)overrideForSelector:(SEL)arg1;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (id)possiblyInexistentOverrideForSelector:(SEL)arg1;
- (void)changeParentPreservingEffectiveValues:(id)arg1;
- (_Bool)isAnythingOverridden;
- (_Bool)isMerged;
- (_Bool)isMergedWithParent;
- (void)setMerged:(_Bool)arg1;
- (void)setMergedWithParent:(_Bool)arg1;
- (void)removeUnnecessaryOverrides;
- (id)overrideForSelector:(SEL)arg1 mustExist:(_Bool)arg2;
- (void)p_setParent:(id)arg1;

@end
