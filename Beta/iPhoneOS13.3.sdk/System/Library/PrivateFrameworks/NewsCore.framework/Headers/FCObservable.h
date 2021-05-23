/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface FCObservable : NSObject

{
    id _value;
    NSMutableArray *_observers;
    unsigned long long _token;
}

@property (retain, nonatomic) NSMutableArray *observers;
@property (nonatomic) unsigned long long token;
@property (retain, nonatomic) id value;

- (id)init;
- (void)dealloc;
- (id)initWithValue:(id)arg1;
- (id)observe:(CDUnknownBlockType)arg1;
- (void)next:(id)arg1;
- (void)quietNext:(id)arg1;

@end
