/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/Swift-Protocol.h>

@class SXDropCapStyle, SXTextStyle;

@protocol SXConditionalComponentTextStyleProperties <Swift>

@property (nonatomic, readonly) long long textAlignment;
@property (nonatomic, readonly) long long lineHeight;
@property (nonatomic, readonly) double relativeLineHeight;
@property (nonatomic, readonly) long long exactLineHeight;
@property (nonatomic, readonly) SXDropCapStyle *dropCapStyle;
@property (nonatomic, readonly) long long hyphenation;
@property (nonatomic, readonly) SXTextStyle *linkStyle;
@property (nonatomic, readonly) long long paragraphSpacingBefore;
@property (nonatomic, readonly) long long paragraphSpacingAfter;
@property (nonatomic, readonly) long long firstLineIndent;
@property (nonatomic, readonly) _Bool hangingPunctuation;
@property (nonatomic, readonly) _Bool fontScaling;

@end
