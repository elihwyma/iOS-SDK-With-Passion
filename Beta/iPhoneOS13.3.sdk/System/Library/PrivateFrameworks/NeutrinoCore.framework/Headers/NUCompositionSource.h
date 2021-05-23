/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUSource.h>

@class NUComposition, NUCompositionSourceDefinition;

@interface NUCompositionSource : NUSource

{
    NUCompositionSourceDefinition *_sourceDefinition;
}

@property (nonatomic, readonly) NUComposition *composition;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithComposition:(id)arg1;
- (id)sourceDefinition:(out id *)arg1;

@end
