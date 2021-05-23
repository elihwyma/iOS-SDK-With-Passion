/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/Swift-Protocol.h>

@class NSString;

@protocol HUControlViewDelegate;

@protocol HUControlView <Swift>

@property (copy, nonatomic) NSString *identifier;
@property (weak, nonatomic) id <HUControlViewDelegate> delegate;
@property (retain, nonatomic) id value;
@property (nonatomic, getter=isDisabled) _Bool disabled;
@property (nonatomic) _Bool canBeHighlighted;

+ (unsigned short)valueClass;

@end
