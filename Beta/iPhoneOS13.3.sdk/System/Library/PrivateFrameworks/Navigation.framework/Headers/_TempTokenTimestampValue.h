/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class NSString, NSTimeZone;

__attribute__((visibility("hidden")))
@interface _TempTokenTimestampValue : NSObject

{
    double _timeStamp;
    NSTimeZone *_timeZone;
    NSString *_formatPattern;
}

@property (nonatomic) double timeStamp;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (retain, nonatomic) NSString *formatPattern;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
