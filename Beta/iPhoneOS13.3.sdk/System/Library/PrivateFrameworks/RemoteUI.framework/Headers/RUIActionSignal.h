/*
 Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface RUIActionSignal : NSObject

{
    unsigned long long _topSignal;
    NSMutableArray *_subActions;
}

@property (nonatomic) unsigned long long topSignal;
@property (retain, nonatomic) NSMutableArray *subActions;

+ (id)stringForActionSignal:(unsigned long long)arg1;
+ (id)signalWithType:(unsigned long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)description;

@end
