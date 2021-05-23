/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@interface ICDeviceSupport : NSObject

+ (struct CGSize)notesDeviceDrawingSize;
+ (_Bool)notesLowEndHardware;
+ (id)notesProductType;
+ (_Bool)deviceSupportsPencil;
+ (_Bool)notesDeviceSupportsLetterpress;
+ (_Bool)shouldOnlyDrawWithPencil;
+ (_Bool)deviceSupportsTouchID;
+ (_Bool)deviceSupportsFaceID;
+ (_Bool)deviceIsIPad;

@end
