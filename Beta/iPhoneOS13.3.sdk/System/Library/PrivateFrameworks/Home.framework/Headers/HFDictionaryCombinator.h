/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSSet;

@interface HFDictionaryCombinator : NSObject

{
    NSSet *_keysToReconcile;
    NSSet *_keysToSkip;
}

@property (copy, nonatomic) NSSet *keysToReconcile;
@property (copy, nonatomic) NSSet *keysToSkip;

+ (_Bool)_isKindOfContainerClass:(id)arg1;

- (id)combineResultDictionary:(id)arg1 withResultDictionary:(id)arg2 reconcilationHandler:(CDUnknownBlockType)arg3;
- (void)_reconcileKey:(id)arg1 fromDictionary:(id)arg2 andDictionary:(id)arg3 intoResultDictionary:(id)arg4 withReconcilationHandler:(CDUnknownBlockType)arg5;
- (id)_mergeVal1:(id)arg1 withVal2:(id)arg2;

@end
