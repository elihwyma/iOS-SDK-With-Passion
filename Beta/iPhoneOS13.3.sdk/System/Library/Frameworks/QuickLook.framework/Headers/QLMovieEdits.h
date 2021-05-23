/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface QLMovieEdits : NSObject

{
    unsigned long long _rightRotationsCount;
    double _trimStartTime;
    double _trimEndTime;
}

@property (nonatomic) unsigned long long rightRotationsCount;
@property (nonatomic) double trimStartTime;
@property (nonatomic) double trimEndTime;

+ (id)editsWithRightRotationsCount:(unsigned long long)arg1 trimStartTime:(double)arg2 trimEndTime:(double)arg3;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (void)resetEditingValues;
- (void)resetTrimmingValues;
- (_Bool)rotated;
- (_Bool)trimmed;
- (void)incrementRightRotationsCount;
- (_Bool)hasEdits;

@end
