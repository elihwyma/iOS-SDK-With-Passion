/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface CTSweetgumPlansInfo : NSObject

{
    NSArray *_planGroups;
    NSString *_morePlansURL;
}

@property (retain, nonatomic) NSArray *planGroups;
@property (retain, nonatomic) NSString *morePlansURL;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
