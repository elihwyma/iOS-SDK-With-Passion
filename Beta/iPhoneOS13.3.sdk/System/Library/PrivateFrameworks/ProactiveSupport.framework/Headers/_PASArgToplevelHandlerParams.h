/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, _PASArgParser;

@interface _PASArgToplevelHandlerParams : NSObject

{
    _PASArgParser *_parser;
    NSDictionary *_options;
    NSArray *_positionalArguments;
}

@property (nonatomic, readonly) _PASArgParser *parser;
@property (nonatomic, readonly) NSDictionary *options;
@property (nonatomic, readonly) NSArray *positionalArguments;

- (id)initWithParser:(id)arg1 options:(id)arg2 positionalArguments:(id)arg3;

@end
