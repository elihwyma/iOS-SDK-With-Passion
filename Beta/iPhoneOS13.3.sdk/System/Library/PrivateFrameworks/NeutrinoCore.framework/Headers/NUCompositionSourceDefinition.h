/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUSourceDefinition.h>

@class NUComposition;

@interface NUCompositionSourceDefinition : NUSourceDefinition

{
    NUComposition *_composition;
}

@property (readonly) NUComposition *composition;

- (id)init;
- (id)initWithComposition:(id)arg1;
- (id)sourceContainerNodeWithIdentifier:(id)arg1 error:(out id *)arg2;

@end
