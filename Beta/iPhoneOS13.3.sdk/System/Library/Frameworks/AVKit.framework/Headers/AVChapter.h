/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSObject.h>

@class NSString, UIImage;

@interface AVChapter : NSObject

{
    UIImage *_image;
    CDUnknownBlockType _imageBlock;
    double _startTime;
    double _duration;
    unsigned long long _number;
    NSString *_title;
}

@property (readonly) double startTime;
@property (readonly) double duration;
@property (readonly) unsigned long long number;
@property (copy, readonly) NSString *title;
@property (readonly) UIImage *image;

+ (void)initialize;
+ (id)playbackChapterWithStartTime:(double)arg1 duration:(double)arg2 number:(unsigned long long)arg3 title:(id)arg4 imageFaultBlock:(CDUnknownBlockType)arg5;
+ (id)chapterAtTime:(double)arg1 inChapters:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStartTime:(double)arg1 duration:(double)arg2 number:(unsigned long long)arg3 title:(id)arg4 imageFaultBlock:(CDUnknownBlockType)arg5;

@end
