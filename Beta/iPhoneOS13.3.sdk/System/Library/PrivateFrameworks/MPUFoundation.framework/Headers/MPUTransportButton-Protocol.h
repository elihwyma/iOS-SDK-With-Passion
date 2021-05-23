/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <MPUFoundation/Swift-Protocol.h>

@class MPUTransportButtonEventHandler;

@protocol MPUTransportButton <Swift>

@property (nonatomic, readonly) MPUTransportButtonEventHandler *transportButtonEventHandler;
@property (nonatomic) _Bool adjustsImageWhenHighlighted;
@property (nonatomic) long long transportButtonImageViewContentMode;

+ (unsigned short)transportButton;

- (unsigned short)prepareForReuse;
- (unsigned short)applyTransportButtonLayoutAttributes: /* Error: Ran out of types for this method. */;
- (unsigned short)wantsCustomHighlightAppearance;

@end
