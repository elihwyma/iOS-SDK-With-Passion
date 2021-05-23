/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface _MSTTLReference : NSObject

{
    id _value;
    double _ttl;
    NSDate *_lastSet;
}

@property (retain, nonatomic) id value;
@property (nonatomic) double ttl;
@property (retain, nonatomic) NSDate *lastSet;

- (id)initWithTTL:(double)arg1;
- (id)getValueWithGenerator:(CDUnknownBlockType)arg1;

@end
