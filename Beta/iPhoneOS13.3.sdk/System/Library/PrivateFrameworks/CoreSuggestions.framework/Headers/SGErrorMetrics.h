/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class SGMBadInteractionIgnored;

@interface SGErrorMetrics : NSObject

{
    SGMBadInteractionIgnored *_badInteractionIgnored;
}

@property (retain, nonatomic) SGMBadInteractionIgnored *badInteractionIgnored;

+ (id)instance;
+ (void)recordInteractionIgnoredWithReason:(struct SGMInteractionIgnoredReason_)arg1;

- (id)init;

@end
