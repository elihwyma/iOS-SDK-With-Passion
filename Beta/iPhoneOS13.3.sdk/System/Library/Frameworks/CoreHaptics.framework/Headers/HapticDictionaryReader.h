/*
 Image: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface HapticDictionaryReader : NSObject

{
    unsigned long long _urlIndex;
}

- (id)parseEvent:(id)arg1;
- (id)parseParam:(id)arg1;
- (id)parseParamCurve:(id)arg1;
- (id)parseEventParams:(id)arg1;
- (id)parseParamCurveControlPoints:(id)arg1;
- (_Bool)verifyVersion:(id)arg1;
- (id)scanForEmbeddedURLs:(id)arg1;
- (_Bool)parseEventsAndParameters:(id)arg1 reply:(CDUnknownBlockType)arg2;

@end
