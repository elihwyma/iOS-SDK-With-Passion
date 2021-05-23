/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Foundation/NSObject.h>

@interface TPSExperiment : NSObject

{
    long long _identifier;
    double _holdoutAllocation;
    long long _camp;
}

@property (nonatomic) long long identifier;
@property (nonatomic) double holdoutAllocation;
@property (nonatomic) long long camp;

+ (_Bool)supportsSecureCoding;
+ (id)classSet;

- (id)init;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)updateWithExperimentDictionary:(id)arg1;
- (_Bool)updateCampIfNeeded;

@end
