/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OABTextBodyProperties : NSObject

+ (void)readTextBodyProperties:(id)arg1 textBox:(const struct EshTextBox *)arg2 useDefaults:(_Bool)arg3 state:(id)arg4;
+ (void)setTextRotation:(int)arg1 textBodyProperties:(id)arg2;
+ (void)setTextFlow:(int)arg1 textBodyProperties:(id)arg2;
+ (void)setTextDirection:(int)arg1 textBodyProperties:(id)arg2;
+ (void)setAutoFit:(_Bool)arg1 textBodyProperties:(id)arg2;
+ (void)setWrap:(int)arg1 textBodyProperties:(id)arg2;
+ (void)setTextAnchor:(int)arg1 textBodyProperties:(id)arg2;
+ (void)setIsAnchorCenter:(int)arg1 textBodyProperties:(id)arg2;
+ (void)writeTextBodyProperties:(id)arg1 toShapeBase:(struct EshShapeBase *)arg2 state:(id)arg3;

@end
