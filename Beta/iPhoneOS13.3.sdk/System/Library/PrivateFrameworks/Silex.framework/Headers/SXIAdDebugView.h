/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <UIKit/UILabel.h>

@interface SXIAdDebugView : UILabel

{
    unsigned long long _adType;
}

@property (nonatomic, readonly) unsigned long long adType;

- (id)initWithType:(unsigned long long)arg1;
- (void)setState:(int)arg1 description:(id)arg2;

@end
