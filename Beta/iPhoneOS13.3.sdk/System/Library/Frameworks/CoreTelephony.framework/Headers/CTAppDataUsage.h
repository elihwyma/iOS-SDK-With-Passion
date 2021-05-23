/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class CTDataUsage, CTDataUsed, NSString;

@interface CTAppDataUsage : NSObject

{
    NSString *_bundleId;
    NSString *_displayName;
    CTDataUsed *_used;
}

@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) CTDataUsed *used;
@property (nonatomic, readonly) CTDataUsage *usage;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init:(id)arg1 withDisplayName:(id)arg2 andUsage:(id)arg3;

@end
