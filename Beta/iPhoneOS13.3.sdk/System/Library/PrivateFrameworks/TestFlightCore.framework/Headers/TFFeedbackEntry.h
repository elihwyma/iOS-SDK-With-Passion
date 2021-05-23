/*
 Image: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TFFeedbackEntry : NSObject

{
    unsigned long long _type;
    NSString *_identifier;
    NSString *_title;
}

@property (nonatomic, readonly) unsigned long long type;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *title;

- (id)initWithType:(unsigned long long)arg1 identifier:(id)arg2 title:(id)arg3;

@end
