//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/WFCombineTextIntentHandling-Protocol.h>

@interface WFCombineTextIntentHandler : NSObject <WFCombineTextIntentHandling>
{
}

- (void)handleCombineText:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)resolveTextForCombineText:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)resolveSeparatorForCombineText:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)resolveCustomSeparatorForCombineText:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;

@end

