/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSArray, VUILabel;

__attribute__((visibility("hidden")))
@interface VUIFeedbackTableViewModel : NSObject

{
    VUILabel *_headerTextView;
    NSArray *_descriptionTextView;
}

@property (retain, nonatomic) VUILabel *headerTextView;
@property (retain, nonatomic) NSArray *descriptionTextView;

+ (id)headerViewWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3;
+ (id)descriptionTextViewWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3;

@end
