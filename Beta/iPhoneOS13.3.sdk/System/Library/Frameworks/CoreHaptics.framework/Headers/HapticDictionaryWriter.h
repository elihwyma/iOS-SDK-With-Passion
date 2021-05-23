/*
 Image: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface HapticDictionaryWriter : NSObject

{
    unsigned long long _urlIndex;
}

- (id)eventToDictionary:(id)arg1 embeddedURLs:(id)arg2;
- (id)paramToDictionary:(id)arg1;
- (id)paramCurveToDictionary:(id)arg1;
- (id)eventParamsToArray:(id)arg1;
- (id)paramCurveControlPointsToArray:(id)arg1;
- (id)patternToDictionary:(id)arg1 events:(id)arg2 parameters:(id)arg3 parameterCurves:(id)arg4 embeddedURLs:(id)arg5;

@end
