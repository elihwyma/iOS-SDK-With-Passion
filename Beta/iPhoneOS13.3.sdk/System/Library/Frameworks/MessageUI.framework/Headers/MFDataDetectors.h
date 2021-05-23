/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSObject.h>

@interface MFDataDetectors : NSObject

+ (id)urlMatchesForString:(id)arg1;
+ (id)urlMatchesForString:(id)arg1 includingTel:(_Bool)arg2;
+ (_Bool)urlIfyNode:(id)arg1 phoneNumberTypes:(unsigned long long)arg2;
+ (_Bool)urlIfyNode:(id)arg1;
+ (Class)_DDURLifierClass;
+ (id)sharedDetectionController;

@end
