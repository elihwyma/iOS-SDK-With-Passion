/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface ETLossConfig : NSObject

{
    unsigned long long _mode;
    NSString *_loss_name;
    NSString *_output_name;
    NSString *_label_name;
    NSArray *_label_shape;
    NSString *_custom_network_path;
}

@property unsigned long long mode;
@property (retain) NSString *loss_name;
@property (retain) NSString *output_name;
@property (retain) NSString *label_name;
@property (retain) NSArray *label_shape;
@property (retain) NSString *custom_network_path;

+ (id)softmaxCrossEntropyLoss;
+ (id)L2Loss;

@end
