/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <Foundation/NSObject.h>

@class CACTextMarkerRange, NSString;

@interface CACPhraseMatchResult : NSObject

{
    id _userInfo;
    NSString *_matchedString;
    CACTextMarkerRange *_markerRange;
}

@property (retain) id userInfo;
@property (readonly) NSString *matchedString;
@property (readonly) CACTextMarkerRange *markerRange;

- (id)description;
- (long long)location;
- (id)initWithMarkerRange:(id)arg1 matchedString:(id)arg2 userInfo:(id)arg3;

@end
