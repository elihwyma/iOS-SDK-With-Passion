/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXScrollPositionRestoring;

@interface SXComponentBookmarkApplicator : NSObject

{
    id <SXScrollPositionRestoring> _scrollPositionRestoring;
}

@property (nonatomic, readonly) id <SXScrollPositionRestoring> scrollPositionRestoring;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)applyBookmark:(id)arg1;
- (id)initWithScrollPositionRestoring:(id)arg1;

@end
