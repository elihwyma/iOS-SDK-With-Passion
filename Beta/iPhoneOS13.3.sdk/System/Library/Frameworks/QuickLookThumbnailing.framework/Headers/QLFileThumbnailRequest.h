/*
 Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

#import <Foundation/NSObject.h>

@class NSURL;

@interface QLFileThumbnailRequest : NSObject

{
    double _scale;
    NSURL *_fileURL;
    unsigned long long _badgeType;
    struct CGSize _maximumSize;
    struct CGSize _minimumSize;
}

@property (nonatomic) struct CGSize maximumSize;
@property (nonatomic) struct CGSize minimumSize;
@property (nonatomic) double scale;
@property (copy, nonatomic) NSURL *fileURL;
@property (nonatomic) unsigned long long badgeType;

- (id)initWithMaximumSize:(struct CGSize)arg1 minimumSize:(double)arg2 scale:(double)arg3 badgeType:(unsigned long long)arg4 fileURL:(id)arg5;

@end
