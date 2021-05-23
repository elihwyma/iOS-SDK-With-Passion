/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@interface PHContentEditingOutputRequestOptions : NSObject

{
    _Bool _asyncAdjustment;
    _Bool _onlyChangingOriginalChoice;
    long long _playbackStyle;
}

@property (nonatomic, getter=isAsyncAdjustment) _Bool asyncAdjustment;
@property (nonatomic, getter=isOnlyChangingOriginalChoice) _Bool onlyChangingOriginalChoice;
@property (nonatomic) long long playbackStyle;

- (id)description;

@end
