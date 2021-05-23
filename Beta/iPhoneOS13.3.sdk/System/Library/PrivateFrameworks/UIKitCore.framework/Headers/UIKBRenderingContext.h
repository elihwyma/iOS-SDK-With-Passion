/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class UIKBRenderConfig;

__attribute__((visibility("hidden")))
@interface UIKBRenderingContext : NSObject <Swift>

{
    _Bool _isFloating;
    unsigned long long _shiftState;
    UIKBRenderConfig *_renderConfig;
    long long _keyboardType;
    long long _handBias;
}

@property (nonatomic) unsigned long long shiftState;
@property (nonatomic) long long keyboardType;
@property (retain, nonatomic) UIKBRenderConfig *renderConfig;
@property (nonatomic) long long handBias;
@property (nonatomic) _Bool isFloating;

+ (id)renderingContextForRenderConfig:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRenderConfig:(id)arg1;

@end
