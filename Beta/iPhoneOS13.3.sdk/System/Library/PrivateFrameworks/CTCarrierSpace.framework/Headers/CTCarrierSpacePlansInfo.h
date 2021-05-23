/*
 Image: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface CTCarrierSpacePlansInfo : NSObject

{
    NSArray *_planGroupsList;
    NSString *_morePlansURL;
}

@property (retain, nonatomic) NSArray *planGroupsList;
@property (retain, nonatomic) NSString *morePlansURL;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
