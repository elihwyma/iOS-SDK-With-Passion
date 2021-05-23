/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

#import <RelevanceEngine/Swift-Protocol.h>

@class CLKTextProvider, UIColor;

@interface REAccessoryDescription : NSObject <Swift>

{
    UIColor *_backgroundColor;
    CLKTextProvider *_textProvider;
}

@property (retain, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) CLKTextProvider *textProvider;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
