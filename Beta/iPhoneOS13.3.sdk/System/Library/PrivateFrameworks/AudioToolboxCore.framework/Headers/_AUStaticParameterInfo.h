/*
 Image: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _AUStaticParameterInfo : NSObject

{
    float _minValue;
    float _maxValue;
    unsigned int _unit;
    unsigned int _flags;
    unsigned int _clumpID;
    NSString *_unitName;
    NSArray *_valueStrings;
}

@property (nonatomic) float minValue;
@property (nonatomic) float maxValue;
@property (nonatomic) unsigned int unit;
@property (retain, nonatomic) NSString *unitName;
@property (nonatomic) unsigned int flags;
@property (retain, nonatomic) NSArray *valueStrings;
@property (nonatomic) unsigned int clumpID;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
