/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class OITSUColor;

__attribute__((visibility("hidden")))
@interface WDShading : NSObject <Swift>

{
    int mStyle;
    OITSUColor *mForegroundColor;
    OITSUColor *mBackgroundColor;
}

+ (id)autoForegroundColor;
+ (id)autoBackgroundColor;
+ (id)nilShading;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)style;
- (void)setStyle:(int)arg1;
- (id)background;
- (void)setBackground:(id)arg1;
- (void)setForeground:(id)arg1;
- (id)foreground;
- (void)setShading:(id)arg1;
- (_Bool)isEqualToShading:(id)arg1;

@end
