/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface OADDashStop : NSObject <Swift>

{
    float mDash;
    float mSpace;
}

+ (void)addStopWithDash:(float)arg1 space:(float)arg2 toArray:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (float)space;
- (float)dash;
- (id)initWithDash:(float)arg1 space:(float)arg2;

@end
