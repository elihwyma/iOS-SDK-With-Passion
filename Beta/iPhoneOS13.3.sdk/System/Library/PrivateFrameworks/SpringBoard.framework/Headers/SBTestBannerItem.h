/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardUI/SBUIBannerItem.h>

@interface SBTestBannerItem : SBUIBannerItem

{
    long long _number;
}

- (id)description;
- (CDUnknownBlockType)action;
- (_Bool)isSticky;
- (id)initWithNumber:(long long)arg1;

@end
