/*
 Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <HomeSharing/HSResponse.h>

@class NSArray;

@interface HSBrowseResponse : HSResponse

{
    NSArray *collections;
}

@property (copy, nonatomic) NSArray *collections;

- (void)dealloc;

@end
