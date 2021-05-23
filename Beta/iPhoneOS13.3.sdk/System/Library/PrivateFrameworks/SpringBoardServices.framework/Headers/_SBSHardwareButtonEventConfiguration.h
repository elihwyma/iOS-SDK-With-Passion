/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <Foundation/NSObject.h>

@interface _SBSHardwareButtonEventConfiguration : NSObject

{
    unsigned long long _eventMask;
    long long _maximumPriority;
}

@property (nonatomic) unsigned long long eventMask;
@property (nonatomic) long long maximumPriority;

- (id)description;

@end
