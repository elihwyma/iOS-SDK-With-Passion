/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@interface CTDataStatus : NSObject

{
    _Bool _attached;
    _Bool _roamAllowed;
    _Bool _dataPlanSignalingReductionOverride;
    _Bool _cellularDataPossible;
    _Bool _inHomeCountry;
    int _indicator;
    int _indicatorOverride;
    int _radioTechnology;
    unsigned int _activeContexts;
    unsigned int _totalActiveContexts;
}

@property (nonatomic) _Bool attached;
@property (nonatomic) int indicator;
@property (nonatomic) int indicatorOverride;
@property (nonatomic) _Bool roamAllowed;
@property (nonatomic) int radioTechnology;
@property (nonatomic) _Bool dataPlanSignalingReductionOverride;
@property (nonatomic) _Bool cellularDataPossible;
@property (nonatomic) unsigned int activeContexts;
@property (nonatomic) unsigned int totalActiveContexts;
@property (nonatomic) _Bool inHomeCountry;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
