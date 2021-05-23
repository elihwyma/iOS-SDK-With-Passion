/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/Swift-Protocol.h>

@class SXColumnLayout;

@protocol SXComponentInsertionLayoutProvider <Swift>

@property (nonatomic, readonly) struct CGSize viewportSize;
@property (nonatomic, readonly) struct CGSize documentSize;
@property (nonatomic, readonly) SXColumnLayout *columnLayout;

- (unsigned short)frameForComponent: /* Error: Ran out of types for this method. */;
- (unsigned short)suggestedMarginForMarker: /* Error: Ran out of types for this method. */;
- (unsigned short)unitConverterForMarker: /* Error: Ran out of types for this method. */;

@end
