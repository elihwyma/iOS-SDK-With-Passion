/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _WBSSafariCyclerConfigurationCommand : NSObject

{
    NSString *_name;
    NSString *_help;
    NSString *_usage;
    unsigned long long _minimumArgumentCount;
    unsigned long long _maximumArgumentCount;
    id _target;
    SEL _action;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *help;
@property (copy, nonatomic) NSString *usage;
@property (nonatomic) unsigned long long minimumArgumentCount;
@property (nonatomic) unsigned long long maximumArgumentCount;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;

- (id)init;
- (void)setArgumentCount:(unsigned long long)arg1;
- (id)initWithName:(id)arg1 help:(id)arg2;
- (_Bool)invokeWithParameters:(id)arg1;

@end
