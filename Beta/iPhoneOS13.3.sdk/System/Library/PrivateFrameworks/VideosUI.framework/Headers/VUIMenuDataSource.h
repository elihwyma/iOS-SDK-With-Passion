/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VUIMenuDataSource : NSObject

{
    NSArray *_mainMenuItems;
    NSArray *_genreMenuItems;
}

@property (retain, nonatomic) NSArray *mainMenuItems;
@property (retain, nonatomic) NSArray *genreMenuItems;

- (id)initWithMainMenuItems:(id)arg1 genreMenuItems:(id)arg2;

@end
