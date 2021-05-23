/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

#import <WeatherFoundation/Swift-Protocol.h>

@class NSString;

@interface WFAQIScaleCategory : NSObject <Swift>

{
    unsigned long long _categoryIndex;
    NSString *_localizedCategoryDescription;
}

@property (nonatomic, readonly) unsigned long long categoryIndex;
@property (nonatomic, readonly) NSString *localizedCategoryDescription;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToScaleCategory:(id)arg1;
- (id)initWithCategoryIndex:(unsigned long long)arg1 localizedCategoryDescription:(id)arg2;

@end
