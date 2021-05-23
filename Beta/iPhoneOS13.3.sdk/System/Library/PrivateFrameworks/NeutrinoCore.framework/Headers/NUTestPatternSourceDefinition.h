/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUSingleSourceDefinition.h>

@interface NUTestPatternSourceDefinition : NUSingleSourceDefinition

{
    long long _orientation;
    CDStruct_d58201db _size;
}

@property (readonly) CDStruct_912cb5d2 size;
@property (readonly) long long orientation;

- (id)init;
- (long long)mediaType;
- (id)generateSourceNodeWithIdentifier:(id)arg1 error:(out id *)arg2;
- (id)initWithSize:(CDStruct_912cb5d2)arg1 orientation:(long long)arg2;

@end
