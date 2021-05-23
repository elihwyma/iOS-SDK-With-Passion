/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADFontReference : NSObject <Swift>

{
    int mIndex;
    OADColor *mColor;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)index;
- (id)color;
- (void)setColor:(id)arg1;
- (void)setIndex:(int)arg1;
- (void)applyToParagraphProperties:(id)arg1;

@end
