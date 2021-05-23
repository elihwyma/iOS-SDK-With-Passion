/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class NSString, NSTimeZone;

__attribute__((visibility("hidden")))
@interface _TimeStampValue : NSObject

{
    double _timeStamp;
    NSTimeZone *_timeZone;
    NSString *_formatPattern;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double timeStamp;
@property (nonatomic, readonly) NSTimeZone *timeZone;
@property (nonatomic, readonly) NSString *formatPattern;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimeStamp:(double)arg1 timeZone:(id)arg2 formatPattern:(id)arg3;

@end
