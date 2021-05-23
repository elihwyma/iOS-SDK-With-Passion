/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <Espresso/ETModelDef.h>

@interface ETModelDefMLP : ETModelDef

{
    int _input_size;
    int _hidden_size;
    int _output_size;
}

@property int input_size;
@property int hidden_size;
@property int output_size;

- (void)buildNetwork;

@end
