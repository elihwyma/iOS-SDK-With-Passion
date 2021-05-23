/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponentBlueprint.h>

@class NSDictionary;

@interface SXTextComponentBlueprint : SXComponentBlueprint

{
    NSDictionary *_exclusionPaths;
}

@property (nonatomic, readonly) NSDictionary *exclusionPaths;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addExclusionPath:(id)arg1 forIdentifier:(id)arg2;
- (void)invalidateSize;

@end
