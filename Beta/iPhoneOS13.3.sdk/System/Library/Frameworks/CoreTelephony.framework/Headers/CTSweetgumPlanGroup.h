/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface CTSweetgumPlanGroup : NSObject

{
    long long _planCategory;
    NSArray *_plans;
}

@property (nonatomic) long long planCategory;
@property (retain, nonatomic) NSArray *plans;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
