/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

#import <Foundation/NSObject.h>

@protocol BFFNavigationControllerDelegate;

__attribute__((visibility("hidden")))
@interface BFFNavigationObserver : NSObject

{
    id <BFFNavigationControllerDelegate> _observer;
}

@property (weak, nonatomic) id <BFFNavigationControllerDelegate> observer;

+ (id)observerWithObserver:(id)arg1;

@end
