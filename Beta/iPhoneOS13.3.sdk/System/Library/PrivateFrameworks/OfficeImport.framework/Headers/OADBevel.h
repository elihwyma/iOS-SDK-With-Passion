/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface OADBevel : NSObject <Swift>

{
    int mType;
    float mWidth;
    float mHeight;
}

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (float)width;
- (float)height;
- (void)setWidth:(float)arg1;
- (void)setHeight:(float)arg1;

@end
