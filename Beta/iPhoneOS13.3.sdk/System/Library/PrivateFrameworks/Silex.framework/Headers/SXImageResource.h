/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXResource.h>

@class NSString, NSURL;

@interface SXImageResource : SXResource

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) struct CGSize dimensions;
@property (nonatomic, readonly) NSString *imageIdentifier;
@property (nonatomic, readonly) _Bool wideColorSpace;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (double)heightForImageWidth:(double)arg1;
- (double)widthForImageHeight:(double)arg1;
- (struct CGSize)sizeThatFills:(struct CGSize)arg1;

@end
