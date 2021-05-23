/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface MTLCompileOptions : NSObject

@property (nonatomic) _Bool tracingEnabled;
@property (nonatomic) _Bool glBufferBindPoints;
@property (nonatomic) _Bool debuggingEnabled;
@property (nonatomic) _Bool compileTimeStatisticsEnabled;
@property (nonatomic) NSString *additionalCompilerArguments;
@property (nonatomic) unsigned char sourceLanguage;
@property (copy, nonatomic) NSDictionary *preprocessorMacros;
@property (nonatomic) _Bool fastMathEnabled;
@property (nonatomic) unsigned long long languageVersion;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
