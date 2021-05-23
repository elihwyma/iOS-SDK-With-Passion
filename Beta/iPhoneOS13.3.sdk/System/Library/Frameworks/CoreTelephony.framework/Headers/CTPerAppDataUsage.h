/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface CTPerAppDataUsage : NSObject

{
    NSString *_displayName;
    NSArray *_used;
}

@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSArray *used;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init:(id)arg1 withPeriods:(unsigned long long)arg2;

@end
