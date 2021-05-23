/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface OITSUDuration : NSObject <Swift>

{
    double mTimeInterval;
}

+ (id)durationWithTimeInterval:(double)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)timeInterval;
- (id)initWithTimeInterval:(double)arg1;

@end
