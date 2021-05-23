/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <NSObject.h>

@class NSString;

@interface ETLossDefinition : NSObject

{
    NSString *_inputName;
    NSString *_targetInputName;
    NSString *_lossOutputName;
    unsigned long long _mode;
    NSString *_outputName;
}

@property (retain) NSString *outputName;
@property (readonly) NSString *inputName;
@property (readonly) NSString *targetInputName;
@property (readonly) NSString *lossOutputName;
@property (readonly) unsigned long long mode;

+ (id)L2LossWithInputName:(id)arg1 targetInputName:(id)arg2 lossOutputName:(id)arg3;
+ (id)crossEntropyLossWithInputName:(id)arg1 targetInputName:(id)arg2 lossOutputName:(id)arg3;

- (id)initWithMode:(unsigned long long)arg1 inputName:(id)arg2 targetName:(id)arg3 lossOutputName:(id)arg4;

@end
