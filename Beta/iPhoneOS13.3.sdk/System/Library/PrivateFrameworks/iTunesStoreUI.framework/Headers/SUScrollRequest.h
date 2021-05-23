/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSValue;

@interface SUScrollRequest : NSObject

{
    _Bool _animated;
    CDUnknownBlockType _completionHandler;
    NSValue *_contentOffsetValue;
    NSValue *_frameValue;
}

@property (nonatomic, getter=isAnimated) _Bool animated;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (retain) NSValue *contentOffsetValue;
@property (retain) NSValue *frameValue;

- (void)dealloc;

@end
