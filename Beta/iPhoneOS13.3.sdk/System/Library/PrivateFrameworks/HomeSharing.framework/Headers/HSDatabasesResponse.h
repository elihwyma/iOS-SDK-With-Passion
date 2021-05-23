/*
 Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <HomeSharing/HSResponse.h>

@class NSArray;

@interface HSDatabasesResponse : HSResponse

{
    NSArray *_databases;
}

@property (copy, nonatomic) NSArray *databases;

@end
