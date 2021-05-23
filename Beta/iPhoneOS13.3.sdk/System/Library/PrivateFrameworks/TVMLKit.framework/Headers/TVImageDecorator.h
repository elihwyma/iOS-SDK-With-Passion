/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TVImageDecorator : NSObject

@property (nonatomic, readonly) struct CGSize loaderScaleToSize;
@property (nonatomic, readonly) _Bool loaderCropToFit;
@property (nonatomic, readonly) struct CGSize expectedSize;
@property (copy, nonatomic, readonly) NSString *decoratorIdentifier;

- (_Bool)isEqual:(id)arg1;
- (id)decorate:(id)arg1 scaledWithSize:(struct CGSize)arg2 croppedToFit:(_Bool)arg3;

@end
