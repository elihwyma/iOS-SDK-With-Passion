/*
 Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol FMAPSDelegate;

__attribute__((visibility("hidden")))
@interface FMAPSDelegateInfo : NSObject

{
    NSString *_topic;
    id <FMAPSDelegate> _delegate;
}

@property (retain, nonatomic) NSString *topic;
@property (weak, nonatomic) id <FMAPSDelegate> delegate;

@end
