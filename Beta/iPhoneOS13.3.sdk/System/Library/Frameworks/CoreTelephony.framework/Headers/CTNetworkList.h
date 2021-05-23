/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface CTNetworkList : NSObject

{
    _Bool _moreComing;
    NSMutableArray *_networks;
}

@property (retain, nonatomic) NSMutableArray *networks;
@property (nonatomic) _Bool moreComing;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
