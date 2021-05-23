/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CTNetwork : NSObject

{
    NSString *_name;
    NSString *_plmn;
    NSString *_rat;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *plmn;
@property (retain, nonatomic) NSString *rat;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
