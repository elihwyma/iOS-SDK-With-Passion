//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFDynamicFormattingValue-Protocol.h>

@protocol HFStringGenerator;

@interface HFSimpleFormattedValue : NSObject <HFDynamicFormattingValue>
{
    id <HFStringGenerator> _currentFormattedValue;
}

@property(readonly, nonatomic) id <HFStringGenerator> currentFormattedValue; // @synthesize currentFormattedValue=_currentFormattedValue;
// - (void).cxx_destruct;
- (id)observeFormattedValueChangesWithBlock:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) id value;
- (id)initWithFormattedValue:(id)arg1;

@end

