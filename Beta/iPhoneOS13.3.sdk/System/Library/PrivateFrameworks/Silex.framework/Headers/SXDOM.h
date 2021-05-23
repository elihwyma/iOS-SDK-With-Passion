/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

#import <Silex/Swift-Protocol.h>

@class NSDictionary, SXComponents;

@protocol SXAutoPlacement, SXDocumentStyle;

@interface SXDOM : NSObject <Swift>

{
    SXComponents *_components;
    NSDictionary *_componentLayouts;
    NSDictionary *_componentStyles;
    NSDictionary *_componentTextStyles;
    NSDictionary *_textStyles;
    NSDictionary *_resources;
    id <SXAutoPlacement> _autoPlacement;
    id <SXDocumentStyle> _documentStyle;
}

@property (copy, nonatomic, readonly) SXComponents *components;
@property (copy, nonatomic, readonly) NSDictionary *textStyles;
@property (copy, nonatomic, readonly) NSDictionary *componentStyles;
@property (copy, nonatomic, readonly) NSDictionary *componentLayouts;
@property (copy, nonatomic, readonly) NSDictionary *componentTextStyles;
@property (copy, nonatomic, readonly) NSDictionary *resources;
@property (nonatomic, readonly) id <SXAutoPlacement> autoPlacement;
@property (nonatomic, readonly) id <SXDocumentStyle> documentStyle;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithComponents:(id)arg1 componentLayouts:(id)arg2 componentStyles:(id)arg3 componentTextStyles:(id)arg4 textStyles:(id)arg5 resources:(id)arg6 autoPlacement:(id)arg7 documentStyle:(id)arg8;

@end
