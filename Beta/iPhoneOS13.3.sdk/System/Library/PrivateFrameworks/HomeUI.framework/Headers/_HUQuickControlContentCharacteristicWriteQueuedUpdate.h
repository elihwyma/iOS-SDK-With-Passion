/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@protocol NACancelable;

@interface _HUQuickControlContentCharacteristicWriteQueuedUpdate : NSObject

{
    id <NACancelable> _cancellationToken;
    NSMutableSet *_affectedCharacteristics;
}

@property (nonatomic, readonly) id <NACancelable> cancellationToken;
@property (nonatomic, readonly) NSMutableSet *affectedCharacteristics;

- (id)initWithCancellationToken:(id)arg1;

@end
