/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class CLKDevice;

@interface NTKNumeralsAnalogFaceConfiguration : NSObject

{
    _Bool _areAllComplicationsOff;
    unsigned long long _faceColor;
    unsigned long long _colorSchemeUnits;
    unsigned long long _selectedStyle;
    long long _utilitySlot;
    CLKDevice *_device;
}

@property (nonatomic, readonly) unsigned long long faceColor;
@property (nonatomic, readonly) unsigned long long colorSchemeUnits;
@property (nonatomic, readonly) unsigned long long selectedStyle;
@property (nonatomic, readonly) _Bool areAllComplicationsOff;
@property (nonatomic, readonly) long long utilitySlot;
@property (nonatomic, readonly) CLKDevice *device;

- (id)initWithFaceColor:(unsigned long long)arg1 colorSchemeUnits:(unsigned long long)arg2 areAllComplicationsOff:(_Bool)arg3 utilitySlot:(long long)arg4 selectedStyle:(unsigned long long)arg5 forDevice:(id)arg6;

@end
