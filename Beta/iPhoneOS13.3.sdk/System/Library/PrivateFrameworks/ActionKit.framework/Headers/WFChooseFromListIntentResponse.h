/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Intents/INIntentResponse.h>

@class WFChooseFromListItem;

@interface WFChooseFromListIntentResponse : INIntentResponse

{
    long long _code;
}

@property (nonatomic) long long code;
@property (copy, nonatomic) WFChooseFromListItem *selectedItem;

- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;

@end
