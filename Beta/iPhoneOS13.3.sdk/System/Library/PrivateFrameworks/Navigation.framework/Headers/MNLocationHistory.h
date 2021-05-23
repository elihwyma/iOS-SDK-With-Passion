/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class NSArray;

@protocol MNLocationHistoryProvider;

@interface MNLocationHistory : NSObject

{
    id <MNLocationHistoryProvider> _locationHistoryProvider;
}

@property (retain, nonatomic) id <MNLocationHistoryProvider> locationHistoryProvider;
@property (readonly) NSArray *locationHistory;

- (id)init;

@end
