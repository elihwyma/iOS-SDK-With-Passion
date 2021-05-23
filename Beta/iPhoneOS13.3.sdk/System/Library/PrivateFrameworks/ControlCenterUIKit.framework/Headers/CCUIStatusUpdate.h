/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CCUIStatusUpdate : NSObject

{
    NSString *_message;
    unsigned long long _type;
}

@property (copy, nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) unsigned long long type;

+ (id)statusUpdateWithMessage:(id)arg1 type:(unsigned long long)arg2;

- (id)_initWithMessage:(id)arg1 type:(unsigned long long)arg2;

@end
