/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@protocol NSObject;

@interface PLPropertyValidationRule : NSObject

{
    long long _type;
    NSString *_keyPath;
    id <NSObject> _expectedValue;
    id <NSObject> _expectedValueRangeLow;
    id <NSObject> _expectedValueRangeHigh;
    NSArray *_expectedValues;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *keyPath;
@property (retain, nonatomic) id <NSObject> expectedValue;
@property (retain, nonatomic) id <NSObject> expectedValueRangeLow;
@property (retain, nonatomic) id <NSObject> expectedValueRangeHigh;
@property (retain, nonatomic) NSArray *expectedValues;

- (id)predicate;
- (id)keyPaths;
- (id)currentValuesOfObject:(id)arg1;
- (id)reverseRule;
- (_Bool)evaluateWithObject:(id)arg1 outMessage:(id *)arg2;
- (id)descriptionOfCurrentValuesOfObject:(id)arg1;

@end
