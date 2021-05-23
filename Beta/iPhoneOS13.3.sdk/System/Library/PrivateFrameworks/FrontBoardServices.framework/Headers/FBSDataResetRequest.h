/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FBSDataResetRequest : NSObject

{
    long long _mode;
    long long _options;
    NSString *_reason;
}

@property (nonatomic) long long mode;
@property (nonatomic) long long options;
@property (copy, nonatomic) NSString *reason;

- (id)initWithMode:(long long)arg1 options:(long long)arg2 reason:(id)arg3;

@end
