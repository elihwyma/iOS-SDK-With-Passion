/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <Foundation/NSObject.h>

@protocol SFFeedbackListener;

__attribute__((visibility("hidden")))
@interface WeakListener : NSObject

{
    id <SFFeedbackListener> _weakListener;
}

@property (nonatomic, readonly) id <SFFeedbackListener> strongListener;

- (id)initWithListener:(id)arg1;

@end
