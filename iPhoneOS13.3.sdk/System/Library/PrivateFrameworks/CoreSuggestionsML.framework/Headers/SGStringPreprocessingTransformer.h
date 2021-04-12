//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsML/PMLTransformerProtocol-Protocol.h>

@class NSArray, NSMethodSignature;

@interface SGStringPreprocessingTransformer : NSObject <PMLTransformerProtocol>
{
    NSArray *_methodNames;
    NSArray *_methodValues;
    NSMethodSignature *_methodSignatureNoValue;
    NSMethodSignature *_methodSignatureWithValue;
}

+ (id)withMethods:(id)arg1;
// - (void).cxx_destruct;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToStringPreprocessingTransformer:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toPlistWithChunks:(id)arg1;
- (void)applySelector:(SEL)arg1 preprocesor:(id)arg2 string:(id)arg3 value:(id)arg4;
- (SEL)selectorForMethod:(id)arg1 preprocessor:(id)arg2;
- (id)transformBatch:(id)arg1;
- (id)transform:(id)arg1;
- (id)initWithMethods:(id)arg1;

@end

