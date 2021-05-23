/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@class AKController;

@interface AKActionController : NSObject

{
    AKController *_controller;
}

@property (weak) AKController *controller;

- (id)initWithController:(id)arg1;
- (void)performActionForSender:(id)arg1;
- (_Bool)validateSender:(id)arg1;
- (void)performActionForSender:(id)arg1 segment:(long long)arg2;
- (_Bool)_isSenderEnabled:(id)arg1 segment:(long long)arg2;
- (_Bool)validateSender:(id)arg1 segment:(long long)arg2;
- (_Bool)isSenderEnabled:(id)arg1;

@end
