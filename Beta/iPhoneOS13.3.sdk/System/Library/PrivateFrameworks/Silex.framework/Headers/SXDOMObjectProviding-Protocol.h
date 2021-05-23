/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/Swift-Protocol.h>

@class SXComponents;

@protocol SXAutoPlacement, SXDocumentStyle;

@protocol SXDOMObjectProviding <Swift>

@property (nonatomic, readonly) id <SXDocumentStyle> documentStyle;
@property (nonatomic, readonly) SXComponents *components;
@property (nonatomic, readonly) id <SXAutoPlacement> autoPlacement;

- (unsigned short)componentLayoutForIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)componentStyleForIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)componentStyleForComponent: /* Error: Ran out of types for this method. */;
- (unsigned short)componentStyleForIdentifiers: /* Error: Ran out of types for this method. */;
- (unsigned short)textStyleForIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)componentTextStyleForIdentifiers: /* Error: Ran out of types for this method. */;
- (unsigned short)componentTextStyleForIdentifier:classification: /* Error: Ran out of types for this method. */;
- (unsigned short)componentTextStyleForIdentifier:inheritingFromComponentTextStyle: /* Error: Ran out of types for this method. */;
- (unsigned short)resourceForIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)imageResourceForIdentifier: /* Error: Ran out of types for this method. */;

@end
