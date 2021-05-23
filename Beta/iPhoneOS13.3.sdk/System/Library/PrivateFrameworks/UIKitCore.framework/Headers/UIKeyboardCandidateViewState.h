/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIKeyboardCandidateViewStyle;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateViewState : NSObject <Swift>

{
    _Bool _hasBackdrop;
    _Bool _candidateNumberEnabled;
    UIKeyboardCandidateViewStyle *_style;
    UIKeyboardCandidateViewStyle *_disambiguationStyle;
    long long _primaryGridRowType;
    long long _disambiguationGridRowType;
    long long _disambiguationGridPosition;
    long long _sortControlPosition;
    long long _inlineTextViewPosition;
    long long _arrowButtonPosition;
    long long _arrowButtonDirection;
    double _yOffset;
    double _additionalHeight;
    unsigned long long _borders;
    struct CGPoint _arrowButtonOffset;
}

@property (retain, nonatomic) UIKeyboardCandidateViewStyle *style;
@property (retain, nonatomic) UIKeyboardCandidateViewStyle *disambiguationStyle;
@property (nonatomic) long long primaryGridRowType;
@property (nonatomic) long long disambiguationGridRowType;
@property (nonatomic) long long disambiguationGridPosition;
@property (nonatomic) long long sortControlPosition;
@property (nonatomic) long long inlineTextViewPosition;
@property (nonatomic) long long arrowButtonPosition;
@property (nonatomic) long long arrowButtonDirection;
@property (nonatomic) _Bool hasBackdrop;
@property (nonatomic) _Bool candidateNumberEnabled;
@property (nonatomic) double yOffset;
@property (nonatomic) double additionalHeight;
@property (nonatomic) struct CGPoint arrowButtonOffset;
@property (nonatomic) unsigned long long borders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)resolveInstanceMethod:(SEL)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
