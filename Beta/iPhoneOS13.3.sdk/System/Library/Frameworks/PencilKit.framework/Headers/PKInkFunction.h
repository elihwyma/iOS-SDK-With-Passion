/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface PKInkFunction : NSObject

{
    unsigned long long _inkProperty;
    unsigned long long _inkInput;
    unsigned long long _inputMask;
    unsigned long long _deviceMask;
    NSMutableArray *_inputPoints;
    NSMutableArray *_minOutputPoints;
    NSMutableArray *_maxOutputPoints;
    NSMutableArray *_outputPoints;
    unsigned long long _functionType;
    NSMutableArray *_controlPoints;
}

@property (nonatomic) unsigned long long inkProperty;
@property (nonatomic) unsigned long long inkInput;
@property (nonatomic) unsigned long long inputMask;
@property (nonatomic) unsigned long long deviceMask;
@property (retain, nonatomic) NSMutableArray *inputPoints;
@property (retain, nonatomic) NSMutableArray *minOutputPoints;
@property (retain, nonatomic) NSMutableArray *maxOutputPoints;
@property (retain, nonatomic) NSMutableArray *outputPoints;
@property (nonatomic) unsigned long long functionType;
@property (retain, nonatomic) NSMutableArray *controlPoints;

+ (id)inkFunctionForProperty:(unsigned long long)arg1 input:(unsigned long long)arg2 inputMask:(unsigned long long)arg3 deviceMask:(unsigned long long)arg4 inputPoints:(id)arg5 outputPoints:(id)arg6 functionType:(unsigned long long)arg7;
+ (id)inkFunctionForProperty:(unsigned long long)arg1 input:(unsigned long long)arg2 inputMask:(unsigned long long)arg3 deviceMask:(unsigned long long)arg4 inputPoints:(id)arg5 minOutputPoints:(id)arg6 maxOutputPoints:(id)arg7 functionType:(unsigned long long)arg8;

- (id)description;
- (id)initWithProperty:(unsigned long long)arg1 input:(unsigned long long)arg2 inputMask:(unsigned long long)arg3 deviceMask:(unsigned long long)arg4 inputPoints:(id)arg5 outputPoints:(id)arg6 functionType:(unsigned long long)arg7;
- (id)initWithProperty:(unsigned long long)arg1 input:(unsigned long long)arg2 inputMask:(unsigned long long)arg3 deviceMask:(unsigned long long)arg4 inputPoints:(id)arg5 minOutputPoints:(id)arg6 maxOutputPoints:(id)arg7 functionType:(unsigned long long)arg8;
- (id)initWithInputPoints:(id)arg1 outputPoints:(id)arg2 functionType:(unsigned long long)arg3;

@end
