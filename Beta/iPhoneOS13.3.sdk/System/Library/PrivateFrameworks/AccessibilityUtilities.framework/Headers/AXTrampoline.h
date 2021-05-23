/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@interface AXTrampoline : NSObject

{
    _Bool _warnAboutUnknownSelectors;
    id _caller;
    Class _targetClass;
}

@property (weak, nonatomic) id caller;
@property (weak, nonatomic) Class targetClass;
@property (nonatomic) _Bool warnAboutUnknownSelectors;

+ (void)methodDoesNotExistSentinal;
+ (id)methodNotFoundSentinal;
+ (id)trampolineWithCaller:(id)arg1 targetClass:(Class)arg2;

- (id)description;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithCaller:(id)arg1 targetClass:(Class)arg2;
- (CDUnknownFunctionPointerType)_findIMPForSelector:(SEL)arg1;
- (_Bool)callerIsClass;

@end
