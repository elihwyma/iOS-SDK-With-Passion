//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSValueTransformer.h>

__attribute__((visibility("hidden")))
@interface _IFValueTransformer : NSValueTransformer
{
    id /* CDUnknownBlockType */ _forwardTransformation;
    id /* CDUnknownBlockType */ _reverseTransformation;
}

+ (BOOL)allowsReverseTransformation;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ reverseTransformation; // @synthesize reverseTransformation=_reverseTransformation;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ forwardTransformation; // @synthesize forwardTransformation=_forwardTransformation;
// - (void).cxx_destruct;
- (id)reverseTransformedValue:(id)arg1;
- (id)transformedValue:(id)arg1;
- (id)initWithForwardTransformation:(id /* CDUnknownBlockType */)arg1 reverseTransformation:(id /* CDUnknownBlockType */)arg2;

@end

