/*
 Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CLKUIAtlas : NSObject

{
    _Atomic int _instanceCount;
    NSString *_uuid;
    unsigned long long _status;
    unsigned long long _width;
    unsigned long long _height;
    double _boundTime;
    unsigned long long _memoryCost;
}

@property (nonatomic) unsigned long long status;
@property (nonatomic, readonly) long long instanceCount;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) unsigned long long width;
@property (nonatomic, readonly) unsigned long long height;
@property (nonatomic) double boundTime;
@property (nonatomic) unsigned long long memoryCost;
@property (readonly) _Bool isPurgable;

- (id)initWithUuid:(id)arg1;
- (void)incrementInstanceCount;
- (void)decrementInstanceCount;
- (id)backing;

@end
