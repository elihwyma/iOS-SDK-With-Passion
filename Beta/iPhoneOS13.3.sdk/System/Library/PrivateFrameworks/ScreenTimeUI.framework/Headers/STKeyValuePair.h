/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Foundation/NSObject.h>

@interface STKeyValuePair : NSObject

{
    id _key;
    id _value;
}

@property (nonatomic, readonly) id key;
@property (nonatomic, readonly) id value;

- (id)init;
- (id)initWithKey:(id)arg1 value:(id)arg2;

@end
