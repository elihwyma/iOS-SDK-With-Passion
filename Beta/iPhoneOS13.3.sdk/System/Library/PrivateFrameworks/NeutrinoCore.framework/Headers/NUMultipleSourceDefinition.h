/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUSourceDefinition.h>

@class NSArray;

@interface NUMultipleSourceDefinition : NUSourceDefinition

{
    NSArray *_sourceDefinitions;
}

@property (readonly) NSArray *sourceDefinitions;

- (id)init;
- (id)description;
- (long long)mediaType;
- (id)sourceContainerNodeWithIdentifier:(id)arg1 error:(out id *)arg2;
- (id)initWithSourceDefinitions:(id)arg1;

@end
