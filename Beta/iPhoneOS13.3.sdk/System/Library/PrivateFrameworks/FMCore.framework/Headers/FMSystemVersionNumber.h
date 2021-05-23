/*
 Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FMSystemVersionNumber : NSObject

{
    long long _baseNumber;
    NSString *_baseLetter;
    long long _buildNumber;
    NSString *_suffix;
}

@property (nonatomic) long long baseNumber;
@property (copy, nonatomic) NSString *baseLetter;
@property (nonatomic) long long buildNumber;
@property (copy, nonatomic) NSString *suffix;

- (id)init;
- (id)description;
- (id)debugDescription;
- (long long)compare:(id)arg1;
- (id)initWithString:(id)arg1;

@end
