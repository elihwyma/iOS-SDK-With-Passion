/*
 Image: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
 */

#import <Foundation/NSObject.h>

@interface ConversationFooterViewDisplayMetrics : NSObject

{
    _Bool _usePhoneLandscapeSymbolConfiguration;
    double _toolbarHeight;
    double _topToBaseline;
}

@property (nonatomic) double toolbarHeight;
@property (nonatomic) double topToBaseline;
@property (nonatomic) _Bool usePhoneLandscapeSymbolConfiguration;

+ (id)displayMetricsWithSafeAreaInsets:(struct UIEdgeInsets)arg1 interfaceOrientation:(long long)arg2;

@end
