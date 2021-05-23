/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface DSDateFormatter : NSObject

{
    NSMutableDictionary *_dateFormatters;
}

@property (retain, nonatomic) NSMutableDictionary *dateFormatters;

+ (id)sharedFormatter;

- (id)init;
- (id)formatterWithType:(long long)arg1;

@end
