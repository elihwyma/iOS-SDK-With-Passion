/*
 Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray;

@interface TLVibrationPattern : NSObject

{
    NSDictionary *_propertyListRepresentation;
    NSMutableArray *_complexPatternDescription;
    id _contextObject;
}

@property (nonatomic, readonly) id _artificiallyRepeatingPropertyListRepresentation;
@property (nonatomic, readonly) id propertyListRepresentation;
@property (retain, nonatomic) id contextObject;

+ (_Bool)isValidVibrationPatternPropertyListRepresentation:(id)arg1;
+ (id)noneVibrationPattern;
+ (id)simpleVibrationPatternWithVibrationDuration:(double)arg1 pauseDuration:(double)arg2;
+ (id)complexVibrationPatternWithDurationsForVibrationsAndPauses:(double)arg1;

- (id)init;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (id)_initWithPropertyListRepresentation:(id)arg1 skipValidation:(_Bool)arg2;
- (double)_computedDuration;
- (void)appendVibrationComponentWithDuration:(double)arg1 isPause:(_Bool)arg2;

@end
