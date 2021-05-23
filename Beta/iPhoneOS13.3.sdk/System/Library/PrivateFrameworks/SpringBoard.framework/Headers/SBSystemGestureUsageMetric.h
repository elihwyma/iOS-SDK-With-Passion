/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface SBSystemGestureUsageMetric : NSObject

{
    NSMutableDictionary *_typeToMetric;
    unsigned long long _currentLocation;
}

@property (nonatomic) unsigned long long currentLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)handleEvent:(unsigned long long)arg1 withContext:(id)arg2;

@end
