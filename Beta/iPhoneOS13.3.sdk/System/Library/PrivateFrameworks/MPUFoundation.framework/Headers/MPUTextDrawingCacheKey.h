/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MPUTextDrawingCacheKey : NSObject

{
    NSString *_text;
    struct CGSize _allowedSize;
}

@property (nonatomic) struct CGSize allowedSize;
@property (copy, nonatomic) NSString *text;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
