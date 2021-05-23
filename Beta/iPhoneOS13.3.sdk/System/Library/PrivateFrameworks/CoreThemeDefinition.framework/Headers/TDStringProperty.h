/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreThemeDefinition/TDProperty.h>

@class NSString;

@interface TDStringProperty : TDProperty

{
    NSString *_stringValue;
}

@property (copy, nonatomic) NSString *stringValue;

- (void)dealloc;
- (void)addToDictionary:(id)arg1;

@end
