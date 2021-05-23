/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKViewElementStyle, NSArray, NSString;

@interface IKStyleList : NSObject

{
    _Bool _requiresMediaQueryEvaluation;
    _Bool _resolutionDone;
    NSString *_classSelector;
    IKStyleList *_baseStyleList;
    NSArray *_styles;
    IKViewElementStyle *_resolvedStyle;
}

@property (retain, nonatomic, readonly) IKStyleList *baseStyleList;
@property (copy, nonatomic, readonly) NSArray *styles;
@property (nonatomic, readonly) _Bool requiresMediaQueryEvaluation;
@property (retain, nonatomic) IKViewElementStyle *resolvedStyle;
@property (nonatomic, getter=isResolutionDone) _Bool resolutionDone;
@property (copy, nonatomic, readonly) NSString *classSelector;

- (void)_resolveWithMediaQueryEvaluator:(id)arg1;
- (void)setNeedsReresolution;
- (id)resolvedStyleWithMediaQueryEvaluator:(id)arg1;
- (id)initWithClassSelector:(id)arg1 styles:(id)arg2 baseStyleList:(id)arg3;

@end
