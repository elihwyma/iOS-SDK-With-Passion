/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

#import <CoreML/Swift-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface MLParameterContainer : NSObject <Swift>

{
    NSMutableDictionary *_currentParameterValues;
    NSArray *_parameterKeys;
    NSDictionary *_parameterDescriptions;
}

@property (retain, nonatomic) NSMutableDictionary *currentParameterValues;
@property (retain, nonatomic) NSArray *parameterKeys;
@property (retain, nonatomic) NSDictionary *parameterDescriptions;

+ (_Bool)supportsSecureCoding;
+ (id)parameterContainerFor:(id)arg1 descriptions:(id)arg2;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)setCurrentValue:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (_Bool)validateParameterValue:(id)arg1 givenConstraint:(id)arg2;

@end
