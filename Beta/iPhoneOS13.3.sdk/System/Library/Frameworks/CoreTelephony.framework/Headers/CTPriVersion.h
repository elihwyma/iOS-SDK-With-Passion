/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@interface CTPriVersion : NSObject

{
    NSNumber *_majorVersion;
    NSNumber *_minorVersion;
    NSNumber *_releaseVersion;
}

@property (retain, nonatomic) NSNumber *majorVersion;
@property (retain, nonatomic) NSNumber *minorVersion;
@property (retain, nonatomic) NSNumber *releaseVersion;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
