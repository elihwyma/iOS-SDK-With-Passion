/*
 Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <HomeSharing/HSResponse.h>

@class NSArray;

@interface HSItemsResponse : HSResponse

{
    NSArray *_items;
}

@property (copy, nonatomic) NSArray *items;

@end
