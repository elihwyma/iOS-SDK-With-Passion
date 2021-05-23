/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HFStateDumpBuilderContext, NSString;

@interface HFStateDumpEntry : NSObject

{
    NSString *_name;
    id _object;
    unsigned long long _options;
    HFStateDumpBuilderContext *_context;
}

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) id object;
@property (nonatomic) unsigned long long options;
@property (copy, nonatomic) HFStateDumpBuilderContext *context;

@end
