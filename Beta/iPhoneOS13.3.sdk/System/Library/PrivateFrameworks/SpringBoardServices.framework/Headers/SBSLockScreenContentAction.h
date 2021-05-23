/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <FrontBoardServices/BSAction.h>

@class NSString;

@interface SBSLockScreenContentAction : BSAction

{
    unsigned long long _type;
    NSString *_slot;
    unsigned long long _secureAppType;
    id _configurationObject;
}

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *slot;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) unsigned long long secureAppType;
@property (retain, nonatomic) id configurationObject;

- (id)initWithType:(unsigned long long)arg1 slot:(id)arg2 identifier:(id)arg3 configurationObject:(id)arg4 handler:(CDUnknownBlockType)arg5;

@end
