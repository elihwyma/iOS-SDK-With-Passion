/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface SXMapSnapShotter : NSObject

{
    NSMutableArray *_snapshotters;
}

@property (retain, nonatomic) NSMutableArray *snapshotters;

+ (id)serialQueue;

- (id)init;
- (CDUnknownBlockType)snapShotWithOptions:(id)arg1 annotations:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end
