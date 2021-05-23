/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <IconServices/ISConcreteImage.h>

@class NSData, NSUUID;

__attribute__((visibility("hidden")))
@interface ISCacheImage : ISConcreteImage

{
    NSUUID *_uuid;
    struct NSData *_validationToken;
}

@property (retain) NSUUID *uuid;
@property _Bool placeholder;
@property (readonly) NSData *validationToken;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1 scale:(double)arg2;

@end
