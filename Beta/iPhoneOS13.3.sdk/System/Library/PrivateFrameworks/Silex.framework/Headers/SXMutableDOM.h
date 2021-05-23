/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXDOM.h>

@class NSMutableDictionary, SXMutableComponents;

@protocol SXAutoPlacement, SXDocumentStyle;

@interface SXMutableDOM : SXDOM

@property (copy, nonatomic, readonly) SXMutableComponents *components;
@property (copy, nonatomic, readonly) NSMutableDictionary *textStyles;
@property (copy, nonatomic, readonly) NSMutableDictionary *componentStyles;
@property (copy, nonatomic, readonly) NSMutableDictionary *componentLayouts;
@property (copy, nonatomic, readonly) NSMutableDictionary *componentTextStyles;
@property (copy, nonatomic, readonly) NSMutableDictionary *resources;
@property (retain, nonatomic) id <SXAutoPlacement> autoPlacement;
@property (retain, nonatomic) id <SXDocumentStyle> documentStyle;

- (id)debugDescription;
- (id)initWithComponents:(id)arg1 componentLayouts:(id)arg2 componentStyles:(id)arg3 componentTextStyles:(id)arg4 textStyles:(id)arg5 resources:(id)arg6 autoPlacement:(id)arg7 documentStyle:(id)arg8;

@end
