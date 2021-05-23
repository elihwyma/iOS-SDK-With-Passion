/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface PhotosControlCommand : NSObject

{
    NSArray *_args;
    unsigned char _options;
}

@property (readonly) _Bool isVerbose;

+ (id)name;
+ (id)usage;
+ (id)usagesummary;
+ (const char *)optstring;
+ (struct option *)longopts;
+ (long long)maximumArgs;
+ (long long)minimumArgs;
+ (id)abbreviations;

- (id)init;
- (id)description;
- (_Bool)processOption:(BOOL)arg1 arg:(id)arg2;
- (id)initWithArgc:(int)arg1 argv:(char **)arg2 options:(unsigned char)arg3;
- (void)willProcessOptions;
- (_Bool)processArgc:(int)arg1 argv:(char **)arg2;
- (id)args;
- (void)output:(id)arg1;
- (void)outputError:(id)arg1;

@end
