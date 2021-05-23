/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface DATrafficLogger : NSObject

{
    NSString *_filename;
}

@property (retain, nonatomic) NSString *filename;

+ (_Bool)enabled;

- (id)initWithFilename:(id)arg1;
- (void)_ensureCustomLogFile;
- (void)logSnippet:(id)arg1;
- (void)slurpAndRemoveLookasideFile:(id)arg1 prefixString:(id)arg2 suffixString:(id)arg3;

@end
