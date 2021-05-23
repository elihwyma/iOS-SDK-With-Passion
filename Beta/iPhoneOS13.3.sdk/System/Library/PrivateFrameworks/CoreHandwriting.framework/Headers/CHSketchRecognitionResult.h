/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <CoreHandwriting/CHRecognitionResult.h>

@class NSString;

@interface CHSketchRecognitionResult : CHRecognitionResult

{
    NSString *_string;
    double _rotation;
}

@property (readonly) NSString *string;
@property (readonly) double rotation;

- (void)dealloc;
- (id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3;

@end
