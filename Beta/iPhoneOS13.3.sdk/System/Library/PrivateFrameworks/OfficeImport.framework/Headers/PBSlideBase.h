/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface PBSlideBase : NSObject

+ (_Bool)readColorScheme:(id)arg1 colorScheme:(id)arg2 colorMap:(id)arg3 state:(id)arg4;
+ (void)readDrawingGroup:(id)arg1 slide:(id)arg2 state:(id)arg3;
+ (void)mapSlideNumberPlaceholder:(id)arg1 tgtSlideBase:(id)arg2 state:(id)arg3;
+ (void)readComments:(id)arg1 slide:(id)arg2 state:(id)arg3;
+ (unsigned long long)authorIdForName:(id)arg1 state:(id)arg2;
+ (_Bool)slideFollowsMasterBackground:(id)arg1;
+ (void)parseSlideShowInfo:(struct PptSSSlideInfoAtom *)arg1 slideBase:(id)arg2 state:(id)arg3;
+ (id)nonPlaceholderDrawablesAmongDrawables:(id)arg1;
+ (int)parseTransType:(int)arg1 direction:(long long)arg2;
+ (id)newOptions:(long long)arg1 transType:(int)arg2;
+ (unsigned char)mapDirection:(id)arg1;

@end
