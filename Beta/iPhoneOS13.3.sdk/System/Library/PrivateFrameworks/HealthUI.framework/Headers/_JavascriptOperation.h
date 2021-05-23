/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _JavascriptOperation : NSObject

{
    NSString *_javascript;
    CDUnknownBlockType _completion;
}

@property (retain, nonatomic) NSString *javascript;
@property (copy, nonatomic) CDUnknownBlockType completion;

- (id)initWithJavascript:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)submitJavascript:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;

@end
