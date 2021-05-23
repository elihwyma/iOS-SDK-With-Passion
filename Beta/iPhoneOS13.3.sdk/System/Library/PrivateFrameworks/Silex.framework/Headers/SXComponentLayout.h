/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXJSONObject.h>

@class NSString, SXJSONArray;

@protocol SXEdgeSpacing;

@interface SXComponentLayout : SXJSONObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) SXJSONArray *conditional;
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
@property (nonatomic, readonly) NSString *identifier;

+ (CDUnknownBlockType)valueClassBlockForPropertyWithName:(id)arg1;
+ (Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2;

- (id)paddingWithValue:(id)arg1 withType:(int)arg2;
- (unsigned long long)sideForValue:(id)arg1 withType:(int)arg2;
- (unsigned long long)ignoreDocumentMarginWithValue:(id)arg1 withType:(int)arg2;
- (unsigned long long)ignoreDocumentGutterWithValue:(id)arg1 withType:(int)arg2;
- (unsigned long long)ignoreViewportPaddingWithValue:(id)arg1 withType:(int)arg2;
- (unsigned long long)horizontalContentAlignmentWithValue:(id)arg1 withType:(int)arg2;

@end
