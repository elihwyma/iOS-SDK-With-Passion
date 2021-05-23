/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface AMSDataMigratorOptions : NSObject

{
    NSString *_currentBuildVersion;
    NSString *_previousBuildVersion;
    unsigned long long _scenario;
}

@property (copy, nonatomic) NSString *currentBuildVersion;
@property (nonatomic, readonly) NSArray *optionsArray;
@property (copy, nonatomic) NSString *previousBuildVersion;
@property (nonatomic) unsigned long long scenario;

+ (id)_stringFromOptionsArray:(id)arg1 atIndex:(unsigned long long)arg2;

- (id)init;
- (id)initWithOptionsArray:(id)arg1;

@end
