/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/Swift-Protocol.h>

@protocol SXEdgeSpacing;

@protocol SXConditionalComponentLayoutProperties <Swift>

@property (nonatomic, readonly) struct _NSRange columnRange;
@property (nonatomic, readonly) unsigned long long ignoreDocumentMargin;
@property (nonatomic, readonly) unsigned long long ignoreDocumentGutter;
@property (nonatomic, readonly) unsigned long long ignoreViewportPadding;
@property (nonatomic, readonly) id <SXEdgeSpacing> margin;
@property (nonatomic, readonly) struct _SXComponentContentInset contentInset;
@property (nonatomic, readonly) struct _SXConvertibleValue minimumHeight;
@property (nonatomic, readonly) struct _SXConvertibleValue suggestedHeight;
@property (nonatomic, readonly) struct _SXConvertibleValue maximumContentWidth;
@property (nonatomic, readonly) unsigned long long horizontalContentAlignment;
@property (nonatomic, readonly) id <SXEdgeSpacing> padding;
@property (nonatomic, readonly) struct _SXConvertibleValue minimumWidth;
@property (nonatomic, readonly) struct _SXConvertibleValue maximumWidth;

@end
