/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface OADRelativeRect : NSObject <Swift>

{
    float mLeft;
    float mTop;
    float mRight;
    float mBottom;
}

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (float)left;
- (void)setLeft:(float)arg1;
- (float)top;
- (float)bottom;
- (float)right;
- (void)setBottom:(float)arg1;
- (void)setRight:(float)arg1;
- (void)setTop:(float)arg1;
- (id)initWithLeft:(float)arg1 top:(float)arg2 right:(float)arg3 bottom:(float)arg4;

@end
