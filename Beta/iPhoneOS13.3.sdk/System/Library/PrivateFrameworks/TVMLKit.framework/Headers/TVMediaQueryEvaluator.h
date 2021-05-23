/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

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

@property (retain, nonatomic) IKViewElement *templateElement;
@property (weak, nonatomic, readonly) id <UITraitEnvironment> traitEnvironment;
@property (retain, nonatomic, readonly) _TVWindowSizeAdaptor *windowSizeAdaptor;
@property (weak, nonatomic) id <TVMediaQueryEvaluatorDelegate> delegate;

+ (id)_productType;
+ (id)_mobileGestaltStringForKey:(struct __CFString *)arg1;
+ (id)evaluatorForTemplateElement:(id)arg1 inWindow:(id)arg2 traitEnvironment:(id)arg3;
+ (id)evaluatorForTemplateElement:(id)arg1 inWindow:(id)arg2;

- (_Bool)evaluateMediaQuery:(id)arg1;
- (id)initWithTemplateElement:(id)arg1;
- (id)initWithTemplateElement:(id)arg1 inWindow:(id)arg2 traitEnvironment:(id)arg3;
- (id)initWithTemplateElement:(id)arg1 inWindow:(id)arg2;
- (_Bool)_evaluateTemplateFeatureType:(id)arg1 withValue:(id)arg2;
- (_Bool)_evaluateAllMediaFeatureType:(id)arg1 withValue:(id)arg2;
- (_Bool)_evaluateDeviceFeatureType:(id)arg1 withValue:(id)arg2;

@end
