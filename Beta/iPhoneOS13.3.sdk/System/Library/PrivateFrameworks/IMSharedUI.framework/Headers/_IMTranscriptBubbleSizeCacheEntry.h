/*
 Image: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
 */

#import <Foundation/NSObject.h>

@interface _IMTranscriptBubbleSizeCacheEntry : NSObject

{
    double _maximumWidth;
    struct CGSize _size;
}

@property (nonatomic) struct CGSize size;
@property (nonatomic, readonly) double minimumWidth;
@property (nonatomic) double maximumWidth;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSize:(struct CGSize)arg1 maximumWidth:(double)arg2;

@end
