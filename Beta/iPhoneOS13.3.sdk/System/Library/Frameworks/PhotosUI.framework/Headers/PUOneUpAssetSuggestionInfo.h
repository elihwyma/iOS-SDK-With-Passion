/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSProgress, PUOneUpSuggestion, PXContextualNotification;

__attribute__((visibility("hidden")))
@interface PUOneUpAssetSuggestionInfo : NSObject

{
    long long _state;
    NSProgress *_progress;
    PUOneUpSuggestion *_suggestion;
    PXContextualNotification *_contextualNotification;
}

@property (nonatomic) long long state;
@property (retain, nonatomic) NSProgress *progress;
@property (retain, nonatomic) PUOneUpSuggestion *suggestion;
@property (retain, nonatomic) PXContextualNotification *contextualNotification;

@end
