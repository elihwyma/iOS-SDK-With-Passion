/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

#import <NSObject.h>

@class CLPlacemark, PPLocationRecord;

@interface PPLocation : NSObject

{
    unsigned short _category;
    CLPlacemark *_placemark;
    PPLocationRecord *_mostRelevantRecord;
}

@property (nonatomic, readonly) CLPlacemark *placemark;
@property (nonatomic, readonly) unsigned short category;
@property (nonatomic, readonly) PPLocationRecord *mostRelevantRecord;

+ (_Bool)supportsSecureCoding;
+ (id)describeCategory:(unsigned short)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToLocation:(id)arg1;
- (id)customizedDescription;
- (id)initWithPlacemark:(id)arg1 category:(unsigned short)arg2 mostRelevantRecord:(id)arg3;

@end
