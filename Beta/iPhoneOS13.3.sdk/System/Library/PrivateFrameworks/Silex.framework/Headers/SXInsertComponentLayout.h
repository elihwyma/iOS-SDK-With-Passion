/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXJSONArray;

@protocol SXEdgeSpacing;

@interface SXInsertComponentLayout : NSObject

{
    struct _SXComponentContentInset _contentInset;
    unsigned long long _ignoreDocumentGutter;
    unsigned long long _ignoreDocumentMargin;
    id <SXEdgeSpacing> _margin;
    unsigned long long _horizontalContentAlignment;
    id <SXEdgeSpacing> _padding;
    unsigned long long _ignoreViewportPadding;
    struct _NSRange _columnRange;
    struct _SXConvertibleValue _minimumHeight;
    struct _SXConvertibleValue _maximumContentWidth;
    struct _SXConvertibleValue _suggestedHeight;
}

@property (nonatomic) unsigned long long ignoreDocumentMargin;
@property (retain, nonatomic) id <SXEdgeSpacing> margin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) SXJSONArray *conditional;
@property (nonatomic, readonly) struct _NSRange columnRange;
@property (nonatomic, readonly) unsigned long long ignoreDocumentGutter;
@property (nonatomic, readonly) unsigned long long ignoreViewportPadding;
@property (nonatomic, readonly) struct _SXComponentContentInset contentInset;
@property (nonatomic, readonly) struct _SXConvertibleValue minimumHeight;
@property (nonatomic, readonly) struct _SXConvertibleValue suggestedHeight;
@property (nonatomic, readonly) struct _SXConvertibleValue maximumContentWidth;
@property (nonatomic, readonly) unsigned long long horizontalContentAlignment;
@property (nonatomic, readonly) id <SXEdgeSpacing> padding;
@property (nonatomic, readonly) struct _SXConvertibleValue minimumWidth;
@property (nonatomic, readonly) struct _SXConvertibleValue maximumWidth;
@property (nonatomic, readonly) NSString *identifier;

- (id)initWithColumnRange:(struct _NSRange)arg1;

@end
