/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <Foundation/NSObject.h>

@interface CHRecognitionResult : NSObject

{
    double _score;
}

@property double score;

- (id)description;
- (id)initWithScore:(double)arg1;

@end
