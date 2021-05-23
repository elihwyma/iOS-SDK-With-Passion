/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@interface CTPlanTransferAttributes : NSObject

{
    unsigned long long _transferCapability;
    unsigned long long _transferStatus;
}

@property (nonatomic) unsigned long long transferCapability;
@property (nonatomic) unsigned long long transferStatus;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransferCapability:(unsigned long long)arg1 transferStatus:(unsigned long long)arg2;

@end
