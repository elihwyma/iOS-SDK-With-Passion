/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADGradientFillStop : NSObject <Swift>

{
    OADColor *mColor;
    float mPosition;
}

+ (void)addStopWithColor:(id)arg1 position:(float)arg2 toArray:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (float)position;
- (id)color;
- (void)setStyleColor:(id)arg1;
- (_Bool)usesPlaceholderColor;
- (id)initWithColor:(id)arg1 position:(float)arg2;

@end
