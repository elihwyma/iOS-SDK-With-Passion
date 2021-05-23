/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSIndexSet;

@interface VNPersonsModelReadOptions : NSObject

{
    NSIndexSet *_acceptableVersions;
}

@property (copy, nonatomic) NSIndexSet *acceptableVersions;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
