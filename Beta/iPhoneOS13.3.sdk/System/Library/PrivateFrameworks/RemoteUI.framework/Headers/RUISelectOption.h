/*
 Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface RUISelectOption : NSObject

{
    NSString *_label;
    NSString *_value;
}

@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *value;

- (id)description;

@end
