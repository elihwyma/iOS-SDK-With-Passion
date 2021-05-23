/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <Foundation/NSObject.h>

@class CACTextMarker;

@interface CACTextMarkerRange : NSObject

{
    CACTextMarker *_startMarker;
    CACTextMarker *_endMarker;
}

@property (nonatomic, readonly) CACTextMarker *startMarker;
@property (nonatomic, readonly) CACTextMarker *endMarker;

+ (id)markerRangeWithStartMarker:(id)arg1 endMarker:(id)arg2;
+ (id)markerRangeWithNSRange:(struct _NSRange)arg1;
+ (id)markerRangeWithStartMarker:(id)arg1 endMarker:(id)arg2 forTextElement:(id)arg3;
+ (id)markerRangeWithArray:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)array;
- (_Bool)isEmpty;
- (struct _NSRange)nsRange;
- (id)initWithStartMarker:(id)arg1 endMarker:(id)arg2;
- (_Bool)containsMarker:(id)arg1 forUIElement:(id)arg2;
- (_Bool)containsRange:(id)arg1 forUIElement:(id)arg2;

@end
