/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/Swift-Protocol.h>

@class NSString;

@protocol SXImageResource <Swift>

@property (nonatomic, readonly) struct CGSize dimensions;
@property (nonatomic, readonly) NSString *imageIdentifier;
@property (nonatomic, readonly) _Bool wideColorSpace;

- (unsigned short)sizeThatFits: /* Error: Ran out of types for this method. */;
- (unsigned short)heightForImageWidth: /* Error: Ran out of types for this method. */;
- (unsigned short)widthForImageHeight: /* Error: Ran out of types for this method. */;
- (unsigned short)sizeThatFills: /* Error: Ran out of types for this method. */;

@end
