/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface _MKMultiPartLabelCacheKey : NSObject

{
    NSAttributedString *_attributedString;
    struct CGSize _size;
}

@property (copy, nonatomic, readonly) NSAttributedString *attributedString;
@property (nonatomic, readonly) struct CGSize size;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAttributedString:(id)arg1 size:(struct CGSize)arg2;

@end
