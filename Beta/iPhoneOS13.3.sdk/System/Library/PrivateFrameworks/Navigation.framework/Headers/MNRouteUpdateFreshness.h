/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MNRouteUpdateFreshness : NSObject

{
    double _maxAge;
    double _maxDisplacement;
    double _minAccuracy;
}

@property (nonatomic) double maxAge;
@property (nonatomic) double maxDisplacement;
@property (nonatomic) double minAccuracy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)jsonDictionary;

@end
