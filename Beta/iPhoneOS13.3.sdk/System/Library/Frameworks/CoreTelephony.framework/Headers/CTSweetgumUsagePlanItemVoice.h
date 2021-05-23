/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CTSweetgumUsagePlanItemVoice : NSObject

{
    NSString *_minutesCapacity;
    NSString *_minutesUsed;
}

@property (retain, nonatomic) NSString *minutesCapacity;
@property (retain, nonatomic) NSString *minutesUsed;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
