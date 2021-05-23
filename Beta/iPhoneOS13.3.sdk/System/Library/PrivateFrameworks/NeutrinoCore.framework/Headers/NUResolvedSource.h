/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUSource.h>

@class NUSourceDefinition;

@interface NUResolvedSource : NUSource

{
    NUSourceDefinition *_resolvedSourceDefinition;
}

@property (retain) NUSourceDefinition *resolvedSourceDefinition;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)sourceDefinition:(out id *)arg1;

@end
