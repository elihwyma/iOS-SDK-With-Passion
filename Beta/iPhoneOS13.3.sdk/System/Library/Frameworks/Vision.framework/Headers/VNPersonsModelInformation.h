/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface VNPersonsModelInformation : NSObject

{
    unsigned long long _version;
    NSDate *_lastModificationDate;
}

@property (nonatomic, readonly) unsigned long long version;
@property (copy, nonatomic, readonly) NSDate *lastModificationDate;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVersion:(unsigned long long)arg1 lastModificationDate:(id)arg2;

@end
