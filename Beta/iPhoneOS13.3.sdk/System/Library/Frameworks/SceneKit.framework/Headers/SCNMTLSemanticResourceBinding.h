/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNMTLResourceBinding.h>

__attribute__((visibility("hidden")))
@interface SCNMTLSemanticResourceBinding : SCNMTLResourceBinding

{
    struct {
        CDUnknownBlockType _field1;
        unsigned int _field2;
        unsigned int _field3;
    } *_semantics;
    long long semanticsCount;
    long long bufferSize;
}

@property (nonatomic) long long semanticsCount;
@property (nonatomic) long long bufferSize;

- (void)dealloc;

@end
