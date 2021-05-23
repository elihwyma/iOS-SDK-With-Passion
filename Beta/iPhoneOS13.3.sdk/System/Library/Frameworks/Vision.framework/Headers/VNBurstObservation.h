/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNObservation.h>

@class NSArray, NSDictionary, NSString;

@interface VNBurstObservation : VNObservation

{
    NSArray *_allImageIdentifiers;
    NSArray *_bestImageIdentifiers;
    NSDictionary *_allImageStats;
    NSString *_coverImageIdentifier;
    NSArray *_clusters;
    _Bool _isAction;
    _Bool _isPortrait;
}

@property (retain, nonatomic) NSArray *allImageIdentifiers;
@property (retain, nonatomic) NSArray *bestImageIdentifiers;
@property (retain, nonatomic) NSDictionary *allImageStats;
@property (retain, nonatomic) NSString *coverImageIdentifier;
@property (retain, nonatomic) NSArray *clusters;
@property (nonatomic) _Bool isAction;
@property (nonatomic) _Bool isPortrait;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
