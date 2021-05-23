/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface CACTextMarker : NSObject

{
    unsigned long long _index;
    NSData *_data;
}

+ (id)markerWithIndex:(unsigned long long)arg1;
+ (id)markerWithData:(id)arg1;
+ (_Bool)marker:(id)arg1 precedesOrEqualsMarker:(id)arg2 forUIElement:(id)arg3;
+ (unsigned long long)lengthFromMarker:(id)arg1 toMarker:(id)arg2 forUIElement:(id)arg3;
+ (_Bool)marker:(id)arg1 precedesMarker:(id)arg2 forUIElement:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)data;
- (unsigned long long)index;
- (void)setData:(id)arg1;
- (id)initWithIndex:(unsigned long long)arg1;
- (void)setIndex:(unsigned long long)arg1;

@end
