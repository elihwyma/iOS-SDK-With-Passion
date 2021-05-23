/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface UIPDFViewManager : NSObject

{
    UIView *_activeView;
}

+ (id)sharedViewManager;

- (void)makeViewActive:(id)arg1;
- (void)viewReleased:(id)arg1;

@end
