/*
 Image: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
 */

#import <Foundation/NSObject.h>

@class CALayer, UIImage;

@interface _SUICStreamingWord : NSObject

{
    _SUICStreamingWord *_previous;
    long long _insertType;
    double _glyphLocationInWordX;
    CALayer *_wordLayer;
    UIImage *_beginImage;
    UIImage *_endImage;
    struct _NSRange _textRange;
}

@property (retain, nonatomic) _SUICStreamingWord *previous;
@property (nonatomic) long long insertType;
@property (nonatomic) struct _NSRange textRange;
@property (nonatomic) double glyphLocationInWordX;
@property (retain, nonatomic) CALayer *wordLayer;
@property (retain, nonatomic) UIImage *beginImage;
@property (retain, nonatomic) UIImage *endImage;

- (id)init;

@end
