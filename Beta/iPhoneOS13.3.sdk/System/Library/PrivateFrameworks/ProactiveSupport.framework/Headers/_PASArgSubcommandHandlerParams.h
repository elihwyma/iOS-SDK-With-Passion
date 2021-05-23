/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, _PASArgSubcommand;

@interface _PASArgSubcommandHandlerParams : NSObject

{
    _PASArgSubcommand *_subcommand;
    NSDictionary *_options;
    NSArray *_positionalArguments;
}

@property (nonatomic, readonly) _PASArgSubcommand *subcommand;
@property (nonatomic, readonly) NSDictionary *options;
@property (nonatomic, readonly) NSArray *positionalArguments;

- (id)initWithSubcommand:(id)arg1 options:(id)arg2 positionalArguments:(id)arg3;

@end
