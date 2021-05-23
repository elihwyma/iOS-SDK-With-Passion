/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@class NSString;

@interface _DPToolArguments : NSObject

{
    _Bool _verbose;
    _Bool _writeOK;
    NSString *_command;
    NSString *_arguments;
    NSString *_recordKey;
    NSString *_databasePath;
}

@property (copy, nonatomic, readonly) NSString *command;
@property (copy, nonatomic, readonly) NSString *arguments;
@property (copy, nonatomic, readonly) NSString *recordKey;
@property (nonatomic, readonly) _Bool verbose;
@property (copy, nonatomic, readonly) NSString *databasePath;
@property (nonatomic, readonly) _Bool writeOK;

+ (id)usage;

- (id)init;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)job;

@end
