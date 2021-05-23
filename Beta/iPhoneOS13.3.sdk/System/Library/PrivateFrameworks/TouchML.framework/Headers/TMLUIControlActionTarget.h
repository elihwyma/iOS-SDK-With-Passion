/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@class NSString;

@interface TMLUIControlActionTarget : NSObject

{
    NSString *_signalName;
    unsigned long long _controlEvent;
}

- (void)controlAction:(id)arg1 forEvent:(id)arg2;
- (id)initWithSignal:(id)arg1 controlEvent:(unsigned long long)arg2;

@end
