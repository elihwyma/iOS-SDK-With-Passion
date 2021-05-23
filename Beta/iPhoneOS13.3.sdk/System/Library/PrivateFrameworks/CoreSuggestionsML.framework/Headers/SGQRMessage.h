/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface SGQRMessage : NSObject

{
    NSString *_message;
    NSString *_context;
    NSDate *_time;
}

@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) NSString *context;
@property (nonatomic, readonly) NSDate *time;

- (id)initWithMessage:(id)arg1 forContext:(id)arg2 time:(id)arg3;
- (_Bool)isEqualToQRMessage:(id)arg1;

@end
