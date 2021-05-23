/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableSet, NSString;

@interface _PASArgSubcommand : NSObject

{
    NSString *_name;
    NSString *_helpDescription;
    CDUnknownBlockType _handler;
    NSMutableArray *_registeredOptions;
    NSMutableSet *_requiredOptions;
}

@property (retain, nonatomic) NSMutableArray *registeredOptions;
@property (retain, nonatomic) NSMutableSet *requiredOptions;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *helpDescription;
@property (nonatomic, readonly) CDUnknownBlockType handler;

+ (id)subcommandWithName:(id)arg1 help:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)simpleSubcommandWithHelpGenerator:(CDUnknownBlockType)arg1 name:(id)arg2 help:(id)arg3 handler:(CDUnknownBlockType)arg4;

- (id)description;
- (id)initWithName:(id)arg1 help:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)registerOption:(id)arg1;
- (id)optionShortHelp;
- (id)optionLongHelp;
- (id)naiveUsageHelpWithPositionalArgString:(id)arg1;
- (id)customUsageHelpWithUsageOverride:(id)arg1 positionalArgString:(id)arg2 optionHelpOverride:(id)arg3 additionalHelpText:(id)arg4;

@end
