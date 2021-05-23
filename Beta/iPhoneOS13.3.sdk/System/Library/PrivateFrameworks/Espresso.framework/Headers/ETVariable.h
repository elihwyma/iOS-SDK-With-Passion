/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <NSObject.h>

@class ETModelDef, NSString;

@interface ETVariable : NSObject

{
    float _initializationAlpha;
    float _initializationBeta;
    unsigned long long _kind;
    NSString *_name;
    NSString *_layerName;
    unsigned long long _initializationMode;
    ETModelDef *_model;
}

@property (weak, nonatomic) ETModelDef *model;
@property (nonatomic) unsigned long long kind;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *layerName;
@property unsigned long long initializationMode;
@property float initializationAlpha;
@property float initializationBeta;

- (void)updateWithData:(id)arg1;
- (id)copyData;
- (id)initWithModelDef:(id)arg1;
- (id)getOpaqueCopy;
- (id)swapWithOpaqueCopy:(id)arg1;

@end
