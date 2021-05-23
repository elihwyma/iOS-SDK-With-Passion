/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WDDetailRowData : NSObject

{
    NSString *_key;
    NSString *_value;
}

@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) NSString *value;

- (id)initWithKey:(id)arg1 value:(id)arg2;

@end
