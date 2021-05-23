/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBWindowHideRequest : NSObject

{
    NSString *_reason;
    struct SBWindowLevelRange_struct _windowLevelRange;
}

@property struct SBWindowLevelRange_struct windowLevelRange;
@property (copy) NSString *reason;

+ (id)hideRequestWithWindowLevelRange:(struct SBWindowLevelRange_struct)arg1 reason:(id)arg2;

- (id)description;

@end
