/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface STUIDevice : NSObject

{
    NSString *_name;
    NSString *_identifier;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *identifier;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 identifier:(id)arg2;

@end
