/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ATXNotificationsContent : NSObject

{
    NSString *_title;
    NSString *_message;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;

- (id)initWithContent:(id)arg1 title:(id)arg2;

@end
