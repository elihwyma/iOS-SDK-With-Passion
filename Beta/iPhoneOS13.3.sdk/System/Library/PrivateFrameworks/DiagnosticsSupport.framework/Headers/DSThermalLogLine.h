/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
 */

#import <DiagnosticsSupport/DSLogLine.h>

@class NSString;

@interface DSThermalLogLine : DSLogLine

{
    float _maxTemp;
    NSString *_eventType;
}

@property (retain, nonatomic) NSString *eventType;
@property (nonatomic) float maxTemp;
@property (nonatomic, readonly) _Bool isTrapEvent;
@property (nonatomic, readonly) _Bool isTrapEntry;

- (id)initWithLogLine:(id)arg1;

@end
