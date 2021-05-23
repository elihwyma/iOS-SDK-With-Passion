/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface CTRemotePlanIdentifierList : NSObject

{
    NSArray *_planIdentifiers;
}

@property (retain, nonatomic) NSArray *planIdentifiers;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlanIdentifiers:(id)arg1;

@end
