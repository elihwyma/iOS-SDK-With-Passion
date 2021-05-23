/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXFill.h>

@class NSString;

@interface SXRepeatableImageFill : SXFill

@property (nonatomic, readonly) NSString *imageIdentifier;
@property (nonatomic, readonly) struct _SXConvertibleValue width;
@property (nonatomic, readonly) struct _SXConvertibleValue height;
@property (nonatomic, readonly) unsigned long long repeat;

- (unsigned long long)repeatWithValue:(id)arg1 withType:(int)arg2;

@end
