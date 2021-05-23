/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXScrollPositionRestoring;

@interface SXScrollPositionManager : NSObject

{
    id <SXScrollPositionRestoring> _scrollPositionRestoring;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <SXScrollPositionRestoring> scrollPositionRestoring;

- (void)updateScrollPosition:(id)arg1 animated:(_Bool)arg2;

@end
