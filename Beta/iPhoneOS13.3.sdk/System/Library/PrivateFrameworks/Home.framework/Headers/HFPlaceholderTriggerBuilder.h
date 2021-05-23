/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFTriggerBuilder.h>

@interface HFPlaceholderTriggerBuilder : HFTriggerBuilder

{
    _Bool _isEditing;
}

@property (nonatomic) _Bool isEditing;

+ (id)createPlaceholderTriggerForHome:(id)arg1 withTriggerActionSetBuilder:(id)arg2 context:(id)arg3;

- (id)commitItem;
- (id)naturalLanguageNameOfType:(unsigned long long)arg1;

@end
