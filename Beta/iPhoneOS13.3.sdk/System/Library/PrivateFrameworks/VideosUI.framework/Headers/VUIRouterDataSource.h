/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class VUIEventDataSource;

__attribute__((visibility("hidden")))
@interface VUIRouterDataSource : NSObject

{
    VUIEventDataSource *_selectEventDataSource;
    VUIEventDataSource *_playEventDataSource;
    VUIEventDataSource *_contextMenuEventDataSource;
}

@property (retain, nonatomic) VUIEventDataSource *selectEventDataSource;
@property (retain, nonatomic) VUIEventDataSource *playEventDataSource;
@property (retain, nonatomic) VUIEventDataSource *contextMenuEventDataSource;

- (id)initWithRouterData:(id)arg1 viewElement:(id)arg2;

@end
