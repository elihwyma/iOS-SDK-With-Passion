/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface IDSTapToRadarRequest : NSObject

{
    NSString *_title;
    NSString *_message;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *message;

- (id)initWithTitle:(id)arg1 message:(id)arg2;

@end
