/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, NSTimeZone;

@interface SXParsedDate : NSObject

{
    _Bool _containedTime;
    NSDate *_date;
    NSTimeZone *_timeZone;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) _Bool containedTime;
@property (nonatomic, readonly) NSTimeZone *timeZone;

- (id)initWithDate:(id)arg1 containedTime:(_Bool)arg2 timeZone:(id)arg3;

@end
