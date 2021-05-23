/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUSourceDefinition.h>

@protocol NUSourceDerivation;

@interface NUSingleSourceDefinition : NUSourceDefinition

{
    id <NUSourceDerivation> _sourceDerivation;
}

@property (retain) id <NUSourceDerivation> sourceDerivation;

- (id)init;
- (id)sourceContainerNodeWithIdentifier:(id)arg1 error:(out id *)arg2;
- (id)generateSourceNodeWithIdentifier:(id)arg1 error:(out id *)arg2;

@end
