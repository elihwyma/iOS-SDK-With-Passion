/*
 Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <HomeSharing/HSResponse.h>

@class NSArray;

@interface HSContainersResponse : HSResponse

{
    NSArray *_containers;
}

@property (copy, nonatomic) NSArray *containers;

@end
