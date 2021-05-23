/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class NSString;

@protocol OABPropertiesManager;

__attribute__((visibility("hidden")))
@interface OABFillPropertiesManager : NSObject <Swift>

{
    const struct EshFill *mFill;
    int mShapeType;
    id <OABPropertiesManager> mMasterManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct EshColor)shadowColor;
- (_Bool)isFilled;
- (int)fillType;
- (struct EshColor)fillFgColor;
- (_Bool)isStroked;
- (struct EshColor)strokeFgColor;
- (struct EshColor)fillBgColor;
- (struct EshColor)strokeBgColor;
- (int)fillFgAlpha;
- (int)fillAngle;
- (int)fillFocusLeft;
- (int)fillFocusTop;
- (int)fillFocusRight;
- (int)fillFocusBottom;
- (unsigned int)fillBlipID;
- (id)fillBlipName;
- (struct EshBlip *)fillBlipDataReference;
- (int)fillBgAlpha;
- (int)fillFocus;
- (const struct EshTablePropVal<EshGradientStop> *)fillGradientColors;
- (id)initWithFill:(const struct EshFill *)arg1 shapeType:(int)arg2 masterShape:(struct EshShape *)arg3;

@end
