/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class CTDataUsage;

@interface CTDataUsed : NSObject

{
    CTDataUsage *_native;
    CTDataUsage *_proxied;
}

@property (nonatomic, readonly) CTDataUsage *native;
@property (nonatomic, readonly) CTDataUsage *proxied;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addUsage:(id)arg1;
- (void)addNativeUsage:(id)arg1;
- (void)addProxiedUsage:(id)arg1;
- (id)initWithUsage:(id)arg1 proxied:(id)arg2;

@end
