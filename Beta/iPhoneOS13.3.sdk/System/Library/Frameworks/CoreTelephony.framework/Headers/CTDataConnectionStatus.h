/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface CTDataConnectionStatus : NSObject

{
    _Bool _suspended;
    _Bool _publicNetAllowed;
    unsigned int _wirelessTechnologyMask;
    int _state;
    int _ipFamily;
    int _contextType;
    NSNumber *_pdp;
    NSString *_interfaceName;
    NSString *_apnName;
}

@property (retain, nonatomic) NSNumber *pdp;
@property (retain, nonatomic) NSString *interfaceName;
@property (retain, nonatomic) NSString *apnName;
@property (nonatomic) unsigned int wirelessTechnologyMask;
@property (nonatomic) int state;
@property (nonatomic) int ipFamily;
@property (nonatomic) _Bool suspended;
@property (nonatomic) _Bool publicNetAllowed;
@property (nonatomic) int contextType;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
