/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBTransientActiveInterfaceOrientationRequester : NSObject

{
    long long _orientation;
    NSString *_reason;
}

@property (copy, nonatomic, readonly) NSString *reason;
@property (nonatomic, readonly) long long orientation;

- (id)initWithOrientation:(long long)arg1 andReason:(id)arg2;

@end
