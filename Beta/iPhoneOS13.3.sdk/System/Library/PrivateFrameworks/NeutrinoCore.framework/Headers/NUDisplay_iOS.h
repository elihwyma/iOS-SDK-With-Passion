/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class CADisplay, NSString, NUColorSpace, NUPixelFormat;

@interface NUDisplay_iOS : NSObject

{
    CADisplay *_display;
}

@property (nonatomic, readonly) CADisplay *display;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id identifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) CDStruct_912cb5d2 size;
@property (readonly) NUPixelFormat *pixelFormat;
@property (readonly) NUColorSpace *colorSpace;

+ (id)mainDisplay;
+ (id)displays;

- (id)init;
- (id)initWithCADisplay:(id)arg1;
- (_Bool)wideColor;

@end
