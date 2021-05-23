/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface FPStringFormat : NSObject

{
    NSString *_format;
    NSArray *_keyPaths;
}

@property (retain, nonatomic) NSString *format;
@property (retain, nonatomic) NSArray *keyPaths;
@property (readonly) unsigned long long length;

+ (id)formatForPlistObject:(id)arg1 localizationLookup:(id)arg2;
+ (id)formatForStringFormatDict:(id)arg1 localizationLookup:(id)arg2;

- (id)evaluateWithValuesByName:(id)arg1;

@end
