/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FPTag : NSObject

{
    int _color;
    NSString *_label;
}

@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) int color;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)localizedCompare:(id)arg1;
- (long long)localizedStandardCompare:(id)arg1;
- (id)initWithLabel:(id)arg1 color:(int)arg2;
- (_Bool)isEqualToTag:(id)arg1;

@end
