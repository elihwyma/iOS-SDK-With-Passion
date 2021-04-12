//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IKViewElement, _TVWindowSizeAdaptor;
@protocol TVMediaQueryEvaluatorDelegate, UITraitEnvironment;

__attribute__((visibility("hidden")))
@interface TVMediaQueryEvaluator : NSObject
{
    _TVWindowSizeAdaptor *_windowSizeAdaptor;
    struct {
        unsigned int respondsToEvaluate:1;
    } _implFlags;
    IKViewElement *_templateElement;
    id <UITraitEnvironment> _traitEnvironment;
    id <TVMediaQueryEvaluatorDelegate> _delegate;
}

+ (id)_mobileGestaltStringForKey:(struct __CFString )arg1;
+ (id)_productType;
+ (id)evaluatorForTemplateElement:(id)arg1 inWindow:(id)arg2 traitEnvironment:(id)arg3;
+ (id)evaluatorForTemplateElement:(id)arg1 inWindow:(id)arg2;
@property(nonatomic) __weak id <TVMediaQueryEvaluatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, retain, nonatomic) _TVWindowSizeAdaptor *windowSizeAdaptor; // @synthesize windowSizeAdaptor=_windowSizeAdaptor;
@property(readonly, nonatomic) __weak id <UITraitEnvironment> traitEnvironment; // @synthesize traitEnvironment=_traitEnvironment;
@property(retain, nonatomic) IKViewElement *templateElement; // @synthesize templateElement=_templateElement;
// - (void).cxx_destruct;
- (BOOL)_evaluateAllMediaFeatureType:(id)arg1 withValue:(id)arg2;
- (BOOL)_evaluateTemplateFeatureType:(id)arg1 withValue:(id)arg2;
- (BOOL)_evaluateDeviceFeatureType:(id)arg1 withValue:(id)arg2;
- (BOOL)evaluateMediaQuery:(id)arg1;
- (id)initWithTemplateElement:(id)arg1 inWindow:(id)arg2 traitEnvironment:(id)arg3;
- (id)initWithTemplateElement:(id)arg1 inWindow:(id)arg2;
- (id)initWithTemplateElement:(id)arg1;

@end

