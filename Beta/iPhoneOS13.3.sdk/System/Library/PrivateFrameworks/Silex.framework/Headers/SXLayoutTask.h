/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXDOM, SXLayoutBlueprint, SXLayoutInstructions, SXLayoutOptions;

@interface SXLayoutTask : NSObject

{
    unsigned long long _type;
    NSString *_identifier;
    SXLayoutOptions *_options;
    SXLayoutInstructions *_instructions;
    SXLayoutBlueprint *_blueprint;
    SXDOM *_DOM;
    double _startTime;
}

@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) SXLayoutOptions *options;
@property (nonatomic, readonly) SXLayoutInstructions *instructions;
@property (nonatomic, readonly) SXLayoutBlueprint *blueprint;
@property (nonatomic, readonly) SXDOM *DOM;
@property (nonatomic, readonly) double startTime;

- (id)description;
- (id)initWithOptions:(id)arg1 instructions:(id)arg2 blueprint:(id)arg3 DOM:(id)arg4;
- (id)initWithOptions:(id)arg1 instructions:(id)arg2;

@end
