/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class AVAsset, AVVideoComposition, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface PUOneUpSuggestion : NSObject

{
    long long _preferredPresentationStyle;
    NSString *_localizedTitle;
    UIImage *_titleIcon;
    NSString *_localizedMessage;
    NSString *_localizedDismissButtonTitle;
    UIImage *_image;
    AVAsset *_loopingVideoAsset;
    AVVideoComposition *_loopingVideoComposition;
    CDUnknownBlockType _markAsSeenHandler;
    CDUnknownBlockType _dismissHandler;
}

@property (nonatomic) long long preferredPresentationStyle;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *localizedTitle;
@property (retain, nonatomic) UIImage *titleIcon;
@property (retain, nonatomic) NSString *localizedMessage;
@property (retain, nonatomic) NSString *localizedDismissButtonTitle;
@property (retain, nonatomic) AVAsset *loopingVideoAsset;
@property (retain, nonatomic) AVVideoComposition *loopingVideoComposition;
@property (copy, nonatomic) CDUnknownBlockType markAsSeenHandler;
@property (copy, nonatomic) CDUnknownBlockType dismissHandler;

- (id)description;

@end
