/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@protocol TUICandidateViewStyle;

@protocol TUICandidateViewState <Swift>

@property (nonatomic, readonly) id <TUICandidateViewStyle> style;
@property (nonatomic, readonly) id <TUICandidateViewStyle> disambiguationStyle;
@property (nonatomic, readonly) long long primaryGridRowType;
@property (nonatomic, readonly) long long disambiguationGridRowType;
@property (nonatomic, readonly) long long disambiguationGridPosition;
@property (nonatomic, readonly) long long sortControlPosition;
@property (nonatomic, readonly) long long inlineTextViewPosition;
@property (nonatomic, readonly) long long arrowButtonPosition;
@property (nonatomic, readonly) long long arrowButtonDirection;
@property (nonatomic, readonly) _Bool hasBackdrop;
@property (nonatomic, readonly) _Bool candidateNumberEnabled;
@property (nonatomic, readonly) double yOffset;
@property (nonatomic, readonly) double additionalHeight;
@property (nonatomic, readonly) struct CGPoint arrowButtonOffset;
@property (nonatomic, readonly) unsigned long long borders;

@end
