/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PLBuildVersion : NSObject

{
    NSString *_stringRepresentation;
    long long _majorBuildNumber;
    NSString *_majorBuildLetterString;
    long long _minorBuildNumber;
    NSString *_minorBuildLetterString;
}

@property (copy, nonatomic, readonly) NSString *stringRepresentation;
@property (nonatomic, readonly) long long majorBuildNumber;
@property (copy, nonatomic, readonly) NSString *majorBuildLetterString;
@property (nonatomic, readonly) long long minorBuildNumber;
@property (copy, nonatomic, readonly) NSString *minorBuildLetterString;

+ (id)currentBuildVersionString;

- (id)description;
- (id)initWithString:(id)arg1;
- (long long)compareBuildVersion:(id)arg1 withPrecision:(long long)arg2;
- (long long)compareBuildVersionString:(id)arg1 withPrecision:(long long)arg2;

@end
