/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

@class FBMainDisplayLayoutPublisher, NSString;

@protocol BSInvalidatable;

@interface FBDisplayLayoutTransition : NSObject

{
    FBMainDisplayLayoutPublisher *_publisher;
    NSString *_name;
    NSString *_transitionReason;
    long long _displayType;
    id <BSInvalidatable> _transition;
    long long _interfaceOrientation;
    long long _backlightLevel;
}

@property (nonatomic, readonly) long long displayType;
@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly, getter=isTransitioning) _Bool transitioning;
@property (copy, nonatomic) NSString *transitionReason;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) long long backlightLevel;

+ (id)layoutForDisplayType:(long long)arg1;
+ (void)flushLayoutForDisplayType:(long long)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)beginTransition;
- (void)endTransition;
- (id)initWithDisplayType:(long long)arg1 name:(id)arg2;

@end
