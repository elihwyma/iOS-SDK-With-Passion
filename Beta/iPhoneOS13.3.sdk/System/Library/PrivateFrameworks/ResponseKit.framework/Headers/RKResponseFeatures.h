/*
 Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface RKResponseFeatures : NSObject

{
    int _count;
    int _sameRecipientCount;
    NSString *_response;
    double _numOfElapsedDays;
    double _normalizedSourceAppCount;
    double _normalizedSourceNotificationCount;
    double _normalizedInputMethodCannedCount;
    double _normalizedInputMethodScribbleCount;
    double _normalizedInputMethodDictationCount;
    unsigned long long _responseLength;
}

@property (readonly) NSString *response;
@property (readonly) int count;
@property (readonly) double numOfElapsedDays;
@property (readonly) double normalizedSourceAppCount;
@property (readonly) double normalizedSourceNotificationCount;
@property (readonly) double normalizedInputMethodCannedCount;
@property (readonly) double normalizedInputMethodScribbleCount;
@property (readonly) double normalizedInputMethodDictationCount;
@property (readonly) unsigned long long responseLength;
@property (readonly) int sameRecipientCount;

- (id)initWithFeatures:(id)arg1 count:(int)arg2 numOfElapsedDays:(double)arg3 sourceAppCount:(double)arg4 sourceNotificationCount:(double)arg5 inputSourceCannedCount:(double)arg6 inputSourceScribbleCount:(double)arg7 inputSourceDictationCount:(double)arg8 responseLength:(unsigned long long)arg9 sameRecipientCount:(int)arg10;

@end
