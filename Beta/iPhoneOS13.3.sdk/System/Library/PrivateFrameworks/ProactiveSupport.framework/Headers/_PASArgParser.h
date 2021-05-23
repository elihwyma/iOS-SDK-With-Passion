/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableSet;

@interface _PASArgParser : NSObject

{
    NSMutableArray *_registeredSubcommands;
    NSMutableArray *_registeredOptions;
    NSMutableSet *_requiredOptions;
    CDUnknownBlockType _handler;
}

@property (nonatomic, readonly) NSMutableArray *registeredSubcommands;
@property (nonatomic, readonly) NSMutableArray *registeredOptions;
@property (retain, nonatomic) NSMutableSet *requiredOptions;
@property (nonatomic, readonly) CDUnknownBlockType handler;

+ (id)boolValueForArgument:(id)arg1 error:(id *)arg2;
+ (id)numberValueForArgument:(id)arg1 error:(id *)arg2;
+ (id)enumValueForArgument:(id)arg1 withMapping:(id)arg2 error:(id *)arg3;
+ (id)parserWithHandler:(CDUnknownBlockType)arg1;
+ (id)simpleParserWithHelpGenerator:(CDUnknownBlockType)arg1 version:(id)arg2 handler:(CDUnknownBlockType)arg3;

- (id)description;
- (id)initWithHandler:(CDUnknownBlockType)arg1;
- (void)registerOption:(id)arg1;
- (id)optionShortHelp;
- (id)optionLongHelp;
- (id)naiveUsageHelpWithPositionalArgString:(id)arg1;
- (void)registerSubcommand:(id)arg1;
- (id)subcommandLongHelp;
- (int)invokeHandlerWithArguments:(const char **)arg1 count:(int)arg2 parseErrorCode:(int)arg3 error:(id *)arg4;
- (id)_argumentParseTemplate:(id)arg1 longArgs:(struct option **)arg2;

@end
